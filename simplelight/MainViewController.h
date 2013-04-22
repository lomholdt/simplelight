//
//  MainViewController.h
//  simplelight
//
//  Created by Jonas Lomholdt on 22/04/13.
//  Copyright (c) 2013 Jonas Lomholdt. All rights reserved.
//

#import "FlipsideViewController.h"

#import <CoreData/CoreData.h>

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate>

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
