//
//  ItemModel.h
//  iOSrss
//
//  Created by Aneta on 28.07.2016.
//  Copyright © 2016 Aneta. All rights reserved.
//

#import <JSONModel/JSONModel.h>
@class DescriptionModel;
@class EnclosureModel;
@class GuidModel;
@class LinkModel;
@class PubDateModel;
#import "SourceModel.h"
@class SourceModel;
@class TitleModel;



@protocol ItemModel
@end

@interface ItemModel : JSONModel

@property  (nonatomic, strong) EnclosureModel *enclosure;
//@property (nonatomic, strong) DescriptionModel * description;
@property (nonatomic,strong) DescriptionModel *description;
@property (nonatomic,strong) GuidModel *guid;
@property (strong,nonatomic) LinkModel *link;
@property(strong,nonatomic) PubDateModel *pubDate;
@property (strong, nonatomic) SourceModel *source;
@property (strong,nonatomic) TitleModel *title;


@end
