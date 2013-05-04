//
//  ViewController.h
//  Rate
//
//  Created by administrator on 5/4/56 BE.
//  Copyright (c) 2556 siriphan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
- (IBAction)Mybuttom1:(id)sender;
@property (strong, nonatomic) IBOutlet UISwitch *mySwitch;
- (IBAction)mySlider:(id)sender;
- (IBAction)mySwitch:(id)sender;
@property (strong, nonatomic) IBOutlet UILabel *myOutput;
@property (strong, nonatomic) IBOutlet UIButton *myButton;
@property (strong, nonatomic) IBOutlet UILabel *myRate;
@property (strong, nonatomic) IBOutlet UISlider *mySlider;
@property (strong, nonatomic) IBOutlet UITextField *myInput;


@end
