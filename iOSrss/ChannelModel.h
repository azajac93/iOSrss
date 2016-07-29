//
//  ChannelModel.h
//  iOSrss
//
//  Created by Aneta on 27.07.2016.
//  Copyright © 2016 Aneta. All rights reserved.
//

#import <JSONModel/JSONModel.h>
#import "RSSModel.h"
#import "XMLMod.h"
@class ItemModel;
@protocol ItemModel

@end

@interface ChannelModel : JSONModel

//@property (nonatomic, assign) NSString* link;
//@property (nonatomic, readwrite) NSString* description;
//@property (nonatomic, assign) NSString* docs;
@property (strong, nonatomic) NSArray<ItemModel>* item;





@end
