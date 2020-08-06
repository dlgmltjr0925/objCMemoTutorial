//
//  Memo+CoreDataProperties.m
//  MemoObjC
//
//  Created by 이희석 on 2020/08/07.
//  Copyright © 2020 Hee Seok Lee. All rights reserved.
//
//

#import "Memo+CoreDataProperties.h"

@implementation Memo (CoreDataProperties)

+ (NSFetchRequest<Memo *> *)fetchRequest {
	return [NSFetchRequest fetchRequestWithEntityName:@"Memo"];
}

@dynamic insertDate;
@dynamic content;

@end
