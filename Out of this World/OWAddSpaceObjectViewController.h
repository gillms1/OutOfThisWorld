//
//  OWAddSpaceObjectViewController.h
//  Out of this World
//
//  Created by Sunny on 17/07/2014.
//  Copyright (c) 2014 Code Coalition. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface OWAddSpaceObjectViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITextField *nameTextField;
@property (strong, nonatomic) IBOutlet UITextField *nicknameTextField;
@property (strong, nonatomic) IBOutlet UITextField *diameterTextField;
@property (strong, nonatomic) IBOutlet UITextField *temperatureTextField;
@property (strong, nonatomic) IBOutlet UITextField *numberOfMoonsTextField;
@property (strong, nonatomic) IBOutlet UITextField *interestingFactTextField;


- (IBAction)cancelButtonPressed:(UIButton *)sender;
- (IBAction)addButtonPressed:(id)sender;


@end
