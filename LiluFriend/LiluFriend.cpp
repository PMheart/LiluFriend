//
//  LiluFriend.cpp
//  LiluFriend
//
//  Copyright © 2017 Vanilla. All rights reserved.
//
//  Note: This is NOT an Apple official kext!
//

#include "LiluFriend.hpp"

// This required macro defines the class's constructors, destructors,
// and several other methods I/O Kit requires.
OSDefineMetaClassAndStructors(LiluFriend, IOService)

// Define the driver's superclass.
#define super IOService

bool LiluFriend::init(OSDictionary *dict)
{
  if (!super::init(dict))
    return false;
    
  return true;
}

void LiluFriend::free()
{
  super::free();
}

IOService *LiluFriend::probe(IOService *provider, SInt32 *score)
{
  IOService *result = super::probe(provider, score);
  return result;
}

bool LiluFriend::start(IOService *provider)
{
  if (!super::start(provider))
    return false;
  
  return true;
}

void LiluFriend::stop(IOService *provider)
{
  super::stop(provider);
}
