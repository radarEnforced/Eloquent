//
//  WindowHostController+SideBars.h
//  MacSword2
//
//  Created by Manfred Bergmann on 19.02.10.
//  Copyright 2010 Software by MABE. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <WindowHostController.h>

@interface WindowHostController (SideBars)

- (BOOL)toggleLSB;
- (BOOL)toggleRSB;
- (void)showLeftSideBar:(BOOL)flag;
- (void)showRightSideBar:(BOOL)flag;
- (BOOL)showingLSB;
- (BOOL)showingRSB;

@end
