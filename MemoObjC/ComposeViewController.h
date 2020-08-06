//
//  ComposeViewController.h
//  MemoObjC
//
//  Created by 이희석 on 2020/08/04.
//  Copyright © 2020 Hee Seok Lee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Memo+CoreDataProperties.h"

NS_ASSUME_NONNULL_BEGIN

@interface ComposeViewController : UIViewController

@property (strong, nonatomic) Memo *editTarget;

@end

NS_ASSUME_NONNULL_END
