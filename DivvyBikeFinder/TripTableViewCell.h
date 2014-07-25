//
//  TripTableViewCell.h
//  DivvyBikeFinder
//
//  Created by David Warner on 7/24/14.
//  Copyright (c) 2014 Mobile Makers. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TripTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *tripLabel;
@property (weak, nonatomic) IBOutlet UILabel *distanceLabel;
@property (weak, nonatomic) IBOutlet UILabel *etaLabel;




@end
