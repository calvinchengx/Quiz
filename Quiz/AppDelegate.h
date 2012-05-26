//
//  AppDelegate.h
//  Quiz
//
//  Created by Calvin Cheng on 26/5/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>
{
    //  These instance variables are all pointers because of *
    
    int currentQuestionIndex;
    
    // The model objects
    NSMutableArray *questions;
    NSMutableArray *answers;
    
    // The view objects
    IBOutlet UILabel *questionField;
    IBOutlet UILabel *answerField;
    UIWindow *window;  // why dont need to declare IBOutlet here
    
}
@property (retain, nonatomic) IBOutlet UIWindow *window;

-(IBAction)showQuestion:(id)sender;
-(IBAction)showAnswer:(id)sender;

@end
