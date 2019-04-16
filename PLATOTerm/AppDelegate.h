//
//  AppDelegate.h
//  PLATOTerm
//
//  Created by Gregory John Casamento on 4/16/19.
//  Copyright © 2019 Gregory John Casamento. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

