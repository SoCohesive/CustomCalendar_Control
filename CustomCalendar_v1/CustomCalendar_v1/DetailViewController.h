//
//  DetailViewController.h
//  CustomCalendar_v1
//
//  Created by Sonam Dhingra on 7/15/13.
//  Copyright (c) 2013 Sonam Dhingra. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
