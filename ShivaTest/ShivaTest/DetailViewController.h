//
//  DetailViewController.h
//  ShivaTest
//
//  Created by Jenkins, Mobile GSUK-PTT/CMCC on 28/02/2015.
//  Copyright (c) 2015 Jenkins, Mobile GSUK-PTT/CMCC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

