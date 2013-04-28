//
//  MainViewController.h
//  simplelight
//
//  Created by Jonas Lomholdt on 22/04/13.
//  Copyright (c) 2013 Jonas Lomholdt. All rights reserved.
//

#import "FlipsideViewController.h"

#import <CoreData/CoreData.h>

#import <AVFoundation/AVFoundation.h>

#import "AudioToolbox/AudioToolbox.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate>
{
    UIButton *onButton;
    UIButton *offButton;
}

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (strong, nonatomic) IBOutlet UIButton *onButton;
@property (strong, nonatomic) IBOutlet UIButton *offButton;

-(IBAction)torchOn:(id)sender;
-(IBAction)torchOff:(id)sender;

-(IBAction)playSound:(id)sender;

@end
