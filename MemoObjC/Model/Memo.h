//
//  Memo.h
//  MemoObjC
//
//  Created by 이희석 on 2020/07/16.
//  Copyright © 2020 Hee Seok Lee. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Memo : NSObject

@property (strong, nonatomic) NSString *content;
@property (strong, nonatomic) NSDate *insertDate;

- (instancetype)initWithContent:(NSString *)content;

+ (NSArray *)dummyMemoList;

@end

NS_ASSUME_NONNULL_END
