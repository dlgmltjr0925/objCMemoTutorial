//
//  DetailViewController.h
//  MemoObjC
//
//  Created by 이희석 on 2020/08/04.
//  Copyright © 2020 Hee Seok Lee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Memo.h"

NS_ASSUME_NONNULL_BEGIN

@interface DetailViewController : UIViewController

@property (strong, nonatomic) Memo* memo;

@end

NS_ASSUME_NONNULL_END
