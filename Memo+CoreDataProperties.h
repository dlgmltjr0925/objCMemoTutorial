//
//  Memo+CoreDataProperties.h
//  MemoObjC
//
//  Created by 이희석 on 2020/08/07.
//  Copyright © 2020 Hee Seok Lee. All rights reserved.
//
//

#import "Memo+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface Memo (CoreDataProperties)

+ (NSFetchRequest<Memo *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSDate *insertDate;
@property (nullable, nonatomic, copy) NSString *content;

@end

NS_ASSUME_NONNULL_END
