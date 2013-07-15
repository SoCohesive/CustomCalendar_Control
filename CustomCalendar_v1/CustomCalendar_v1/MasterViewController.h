//
//  MasterViewController.h
//  CustomCalendar_v1
//
//  Created by Sonam Dhingra on 7/15/13.
//  Copyright (c) 2013 Sonam Dhingra. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
