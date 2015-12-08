//
//  Movie.h
//  restfulTest
//
//  Created by Czars on 2015/12/8.
//  Copyright © 2015年 Czars. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Movie : NSObject

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *year;
@property (nonatomic, strong) NSString *rating;
@property (nonatomic, strong) NSDictionary *poster;


@end
