//
//  RSSModel.h
//  iOSrss
//
//  Created by Aneta on 27.07.2016.
//  Copyright © 2016 Aneta. All rights reserved.
//

#import <JSONModel/JSONModel.h>
#import "XMLMod.h"
@class ChannelModel;

@interface RSSModel : JSONModel

@property (nonatomic,strong) ChannelModel *channel;


@end
