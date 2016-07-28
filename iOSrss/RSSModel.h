//
//  RSSModel.h
//  iOSrss
//
//  Created by Aneta on 27.07.2016.
//  Copyright © 2016 Aneta. All rights reserved.
//

#import <JSONModel/JSONModel.h>
#import "ChannelModel.h"
#import "XMLModel.h"

@interface RSSModel : JSONModel

@property (strong, nonatomic) ChannelModel *channel;


@end
