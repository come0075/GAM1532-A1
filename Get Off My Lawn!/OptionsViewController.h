//
//  OptionsViewController.h
//  Get Off My Lawn!
//
//  Created by Philippe Comeau on 2/4/2014.
//  Copyright (c) 2014 GAM1532 Game Development IV. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OptionsViewController : NSObject

-(IBAction)gameCenterSwitchEvent:(id)sender;
-(IBAction)musicVolumeSliderEvent:(id)sender;
-(IBAction)effectsVolumeSliderEvent:(id)sender;
-(IBAction)difficultySelectorEvent:(id)sender;

@end
