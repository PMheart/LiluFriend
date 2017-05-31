//
//  LiluFriend.hpp
//  LiluFriend
//
//  Copyright © 2017 Vanilla. All rights reserved.
//
//  Note: This is NOT an Apple official kext!
//

#ifndef LiluFriend_hpp
#define LiluFriend_hpp

#include <IOKit/IOLib.h>
#include "LegacyIOService.h"

class LiluFriend : public IOService
{
  OSDeclareDefaultStructors(LiluFriend)
public:
  virtual bool init(OSDictionary *dictionary = 0) override;
  virtual void free(void) override;
  virtual IOService *probe(IOService *provider, SInt32 *score) override;
  virtual bool start(IOService *provider) override;
  virtual void stop(IOService *provider) override;
};

#endif /* LiluFriend_hpp */
