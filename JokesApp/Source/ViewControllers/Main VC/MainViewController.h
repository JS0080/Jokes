//
//  MainViewController.h
//  SmoothPay2.0
//
//  Created by Alex on 11/12/15.
//  Copyright (c) 2015 BCL. All rights reserved.
//

#import "BaseViewController.h"
#import "XPageManager.h"

@interface MainViewController : BaseViewController

- (void) refreshList:(NSInteger)category;
- (void) refreshListAll;

@end
