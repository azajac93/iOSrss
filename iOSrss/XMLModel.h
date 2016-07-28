//
//  BreakNews.h
//  iOSrss
//
//  Created by Aneta on 27.07.2016.
//  Copyright © 2016 Aneta. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JSONModel/JSONModel.h>
#import "RSSModel.h"
#import "ChannelModel.h"


@interface XMLModel : JSONModel


@property (nonatomic, strong) RSSModel* rss;


@end
