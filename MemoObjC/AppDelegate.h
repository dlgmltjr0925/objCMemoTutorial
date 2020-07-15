//
//  AppDelegate.h
//  MemoObjC
//
//  Created by 이희석 on 2020/07/16.
//  Copyright © 2020 Hee Seok Lee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

