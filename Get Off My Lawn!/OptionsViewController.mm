//
//  OptionsViewController.mm
//  Get Off My Lawn!
//
//  Created by Philippe Comeau on 2/4/2014.
//  Copyright (c) 2014 GAM1532 Game Development IV. All rights reserved.
//

#import "OptionsViewController.h"
#include "GameSettings.h"

@implementation OptionsViewController

@end

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    // Get the version number info from the info.plist file
    
    // Do any additional setup after loading the view, typically from a nib.
    
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

-(IBAction)gameCenterSwitchEvent:(id)sender
{
    if([sender isKindOfClass:[UISwitch class]] == YES)
    {
        UISwitch* uiswitch = sender;
        GameSettings::getInstance()->setGameCenterEnabled(uiswitch.isOn);
    }
}

-(IBAction)musicVolumeSliderEvent:(id)sender
{
    if([sender isKindOfClass:[UISlider class]] == YES)
    {
        UISlider* slider = sender;
        GameSettings::getInstance()->setMusicVolume(slider.value);
    }
}

-(IBAction)effectsVolumeSliderEvent:(id)sender
{
    if([sender isKindOfClass:[UISlider class]] == YES)
    {
        UISlider* slider = sender;
        GameSettings::getInstance()->setEffectsVolume(slider.value);
    }
}

-(IBAction)difficultySelectorEvent:(id)sender
{
    if([sender isKindOfClass:[UISegmentedControl class]] == YES)
    {
        UISegmentedControl* segmentedControl = sender;
        GameSettings::getInstance()->setDifficulty(segmentedControl.selectedSegmentIndex);
    }
}

@end

