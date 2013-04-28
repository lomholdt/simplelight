//
//  FlipsideViewController.m
//  simplelight
//
//  Created by Jonas Lomholdt on 22/04/13.
//  Copyright (c) 2013 Jonas Lomholdt. All rights reserved.
//

#import "FlipsideViewController.h"

@interface FlipsideViewController ()

@end

@implementation FlipsideViewController

- (IBAction)linkToJonas {
    [[UIApplication sharedApplication] openURL:[NSURL URLWithString:@"http://www.lomholdt.com/simplelight"]];
}

- (IBAction)linkToHenrik {
    [[UIApplication sharedApplication] openURL:[NSURL URLWithString:@"#"]];
}




- (void)awakeFromNib
{
    [super awakeFromNib];
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - Actions

- (IBAction)done:(id)sender
{
    [self.delegate flipsideViewControllerDidFinish:self];
}

@end
