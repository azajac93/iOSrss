//
//  ChannelModel.h
//  iOSrss
//
//  Created by Aneta on 27.07.2016.
//  Copyright © 2016 Aneta. All rights reserved.
//

#import <JSONModel/JSONModel.h>
#import "RSSModel.h"

@interface ChannelModel : JSONModel

@property (nonatomic, assign) NSString* link;
@property (nonatomic, assign) NSString* description;
@property (nonatomic, assign) NSString* enclosure;
@property (nonatomic, assign) NSString* guid;
@property (nonatomic, assign) NSString* pubDate;
@property (nonatomic, assign) NSString* source;
@property (nonatomic, assign) NSString* title;

@end
