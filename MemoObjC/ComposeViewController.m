//
//  ComposeViewController.m
//  MemoObjC
//
//  Created by 이희석 on 2020/08/04.
//  Copyright © 2020 Hee Seok Lee. All rights reserved.
//

#import "ComposeViewController.h"
#import "Memo.h"
#import "DataManager.h"

@interface ComposeViewController ()

- (IBAction)close:(id)sender;
- (IBAction)save:(id)sender;
@property (weak, nonatomic) IBOutlet UITextView *memoTextView;

@end

@implementation ComposeViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    if ( self.editTarget != nil) {
        self.navigationItem.title = @"메모 편집";
        self.memoTextView.text = self.editTarget.content;
    } else {
        self.navigationItem.title = @"새 메모";
        self.memoTextView.text = @"";
    }
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

- (IBAction)save:(id)sender {
    NSString *memo = self.memoTextView.text;
    
    if (self.editTarget != nil) {
        self.editTarget.content = memo;
        [[DataManager sharedInstance] saveContext];
    } else {
        [[DataManager sharedInstance] addNewMemo:memo];
    }
    
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (IBAction)close:(id)sender {
    [self dismissViewControllerAnimated:YES completion:nil];
}
@end
