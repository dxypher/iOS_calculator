//
//  ViewController.h
//  Calculator
//
//  Created by Nikhil on 9/21/13.
//  Copyright (c) 2013 Nikhil. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
{
    int total;
    int mode;
    NSString *valueString;
    IBOutlet UILabel *label;
    BOOL lastButtonWasMode;
}

-(IBAction)tapedClear:(id)sender;
-(IBAction)tapedNumber:(UIButton*)btn;
-(IBAction)tapedPlus:(id)sender;
-(IBAction)tapedMinus:(id)sender;
-(IBAction)tapedMultiply:(id)sender;
-(IBAction)tapedEquals:(id)sender;
@end
