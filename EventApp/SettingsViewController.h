//
//  SettingsViewController.h
//  Reminder
//
//  Created by Sebastian Engel on 27.05.11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <EventKit/EventKit.h>

@class CalendarPickerViewController;
@class AlarmSignalPickerViewController;

@interface SettingsViewController : UITableViewController {
    
    UISwitch *keyboardAtStartSwitch;
    UISwitch *datePickerSwitch;
    
    EKEventStore *eventDB;
    NSUserDefaults *ud;
    
    BOOL value;
    
    CalendarPickerViewController *calendarPickerViewController;
    AlarmSignalPickerViewController *alarmsignalPickerViewController;
}


@property (nonatomic, retain) CalendarPickerViewController *calendarPickerViewController;
@property (nonatomic, retain) AlarmSignalPickerViewController *alarmsignalPickerViewController;

@end
