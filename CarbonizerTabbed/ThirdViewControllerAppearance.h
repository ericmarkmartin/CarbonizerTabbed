//
//  ThirdViewControllerAppearance.h
//  CarbonizerTabbed
//
//  Created by Eric Martin on 3/31/14.
//  Copyright (c) 2014 Martin Developments. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ThirdViewControllerAppearance : UITableViewController

{
    IBOutlet UISwitch *flashingOn;
}

-(IBAction)saveSettings:(id)sender;

@end