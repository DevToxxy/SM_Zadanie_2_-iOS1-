//
//  SecondViewController.h
//  Zadanie2
//
//  Created by student on 12/10/2021.
//  Copyright © 2021 PB WI. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SecondViewController;

@protocol SecondViewControllerDelegate
- (void) addItemViewController:(SecondViewController *) controller didFinishEnteringItem: (NSString *) item;

@end

@interface SecondViewController : UIViewController



@property (nonatomic,weak) IBOutlet UITextField *modifiedSurnameTextField;

@property NSString *surname;

@property (nonatomic,weak) id <SecondViewControllerDelegate> delegate;
@end

