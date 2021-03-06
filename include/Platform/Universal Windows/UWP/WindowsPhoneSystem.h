//******************************************************************************
//
// Copyright (c) 2015 Microsoft Corporation. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//******************************************************************************

// WindowsPhoneSystem.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWP_WINDOWS_PHONE_SYSTEM_EXPORT
#define OBJCUWP_WINDOWS_PHONE_SYSTEM_EXPORT __declspec(dllimport)
#ifndef IN_OBJCUWP_BUILD
#pragma comment(lib, "ObjCUWP_Windows_Phone_System.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WPSSystemProtection;
@protocol WPSISystemProtectionStatics, WPSISystemProtectionUnlockStatics;

#import <Foundation/Foundation.h>

// Windows.Phone.System.SystemProtection
#ifndef __WPSSystemProtection_DEFINED__
#define __WPSSystemProtection_DEFINED__

OBJCUWP_WINDOWS_PHONE_SYSTEM_EXPORT
@interface WPSSystemProtection : RTObject
+ (void)requestScreenUnlock;
+ (BOOL)screenLocked;
@end

#endif // __WPSSystemProtection_DEFINED__

