//
//  ViewController.m
//  Get Off My Lawn!
//
//  Created by Philippe Comeau on 1/30/2014.
//  Copyright (c) 2014 GAM1532 Game Development IV. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

@synthesize label = m_label;

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    // Get the version number info from the info.plist file
    NSDictionary* infoDictionary = [[NSBundle mainBundle] infoDictionary];
    NSString* version = [infoDictionary objectForKey:@"CFBundleShortVersionString"];
    NSString* formatted = [NSString stringWithFormat:@"Version: %@", version];
    
	// Do any additional setup after loading the view, typically from a nib.
    // [m_Label setText:version];
    [m_Label setText:formatted];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end