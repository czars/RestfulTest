//
//  MovieTableViewCell.h
//  restfulTest
//
//  Created by Czars on 2015/12/8.
//  Copyright © 2015年 Czars. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MovieTableViewCell : UITableViewCell
@property (strong, nonatomic) IBOutlet UIImageView *posterImage;
@property (strong, nonatomic) IBOutlet UILabel *title;
@property (strong, nonatomic) IBOutlet UILabel *rating;
@property (strong, nonatomic) IBOutlet UILabel *year;

@end
