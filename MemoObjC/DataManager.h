//
//  DataManager.h
//  MemoObjC
//
//  Created by 이희석 on 2020/08/07.
//  Copyright © 2020 Hee Seok Lee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

NS_ASSUME_NONNULL_BEGIN

@interface DataManager : NSObject


@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;

+ (instancetype) sharedInstance;

@property (readonly, strong) NSManagedObjectContext *mainContext;

@property (strong, nonatomic) NSMutableArray *memoList;

- (void)fetchMemo;

- (void)addNewMemo: (NSString *)memo;

@end

NS_ASSUME_NONNULL_END
