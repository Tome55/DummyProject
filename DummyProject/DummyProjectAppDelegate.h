//
//  DummyProjectAppDelegate.h
//  DummyProject
//
//  Created by jittiyut on 9/3/54 BE.
//  Copyright 2554 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DummyProjectViewController;

@interface DummyProjectAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet DummyProjectViewController *viewController;

@end
