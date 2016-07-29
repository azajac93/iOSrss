//
//  XMLModel.h
//  
//
//  Created by Aneta on 28.07.2016.
//
//

#import <JSONModel/JSONModel.h>
#import "RSSModel.h"

@interface XMLModel : JSONModel

@property (strong, nonatomic) RSSModel* rss;

@end
