LiluFriend
==========

A helper of [Lilu](https://github.com/vit9696/Lilu) for those who prefer to leave everything inside ``/Library/Extensions`` and ``/System/Library/Extensions``.

***Note: This is NOT a plugin of Lilu!***

#### Technical Backgrounds
As we all know, Lilu needs loading at an early stage for each patch to be applied properly. We can simply implement this via the InjextKext function of a bootloader like Clover does. (It's also somewhat unreliable though)
As for system locations, the situation can be more catastrophic, because we cannot ensure that everything related to Lilu is loaded from the very beginning and thus the patches may be failed to be applied.
So that's why LiluFriend comes.

First of all, LiluFriend is a **dummy** kext (Yes, it itself just does nothing) with ``com.apple.security`` prefix in its bundle identifier and ``AppleSecurityExtension`` = ``true``, therefore it will be always loaded correctly.
Secondly, LiluFriend treats all Lilu and its plugins as LiluFriend's dependencies, this enforces Lilu and its plugins loaded before LiluFriend even if they are not ``com.apple.security`` prefixed (Needs setting).

#### Configuration
1. Download the pre-compiled binary from [Releases](https://github.com/PMheart/LiluFriend/releases), or compile it yourself by downloading source code.
2. Open ``LiluFriend.kext/Contents/Info.plist`` and navigate to ``OSBundleLibraries``.
3. Add your desired plugins here. (Check the ``Info.plist`` of the plugin and gather its ``CFBundleIdentifier``)

Note: As for version, check ``Info.plist`` of each plugin, firstly search for ``OSBundleCompatibleVersion``, if it exists, then use such value, otherwise search for ``CFBundleVersion`` and use this value instead.

4. Save your edited Info.plist and install ``LiluFriend.kext`` to ``/Library/Extensions`` and ``/System/Library/Extensions``, you can also let your bootloader inject it if you prefer not to install any kext on system locations for those who want Lilu and its plugins always work fine.

#### Support and Discussion
- [InsanelyMac topic](http://www.insanelymac.com/forum/topic/324146-lilufriend-fixing-lilu-does-not-function-correctly-under-system-locations) in English
- [PCBeta aka 远景论坛](http://bbs.pcbeta.com/viewthread-1743744-1-1.html) in Chinese/中文
- [GitHub Issues](https://github.com/PMheart/LiluFriend/issues)

#### Credits 
- [Apple](https://www.apple.com) for macOS  
- [vit9696](https://github.com/vit9696) for the initial idea
- [PMheart](https://github.com/PMheart) for writing the software and maintaining it

#### Bug reports
All bugs should be reported at [the issue section of this repository](https://github.com/PMheart/LiluFriend/issues).
