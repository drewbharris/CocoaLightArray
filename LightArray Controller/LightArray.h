//
//  LightArray.h
//  LightArray Controller
//
//  Created by Drew Harris on 2/8/2014.
//  Copyright (c) 2014 Drew Harris. All rights reserved.
//

#import <Foundation/Foundation.h>

#include <IOKit/IOKitLib.h>
#include <IOKit/serial/IOSerialKeys.h>
#include <IOKit/IOBSD.h>
#include <IOKit/serial/ioss.h>
#include <sys/ioctl.h>

@interface LightArray : NSObject

- (void) start;

@end
