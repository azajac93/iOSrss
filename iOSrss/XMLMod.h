//
//  XMLMod.h
//  iOSrss
//
//  Created by Aneta on 28.07.2016.
//  Copyright © 2016 Aneta. All rights reserved.
//

#import <JSONModel/JSONModel.h>
//#import "RSSModel.h"
#import "ChannelModel.h"
@class RSSModel ;



@interface XMLMod : JSONModel

@property (nonatomic, strong)RSSModel* rss;

@end
