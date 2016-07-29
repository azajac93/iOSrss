//
//  GuidModel.h
//  iOSrss
//
//  Created by Aneta on 29.07.2016.
//  Copyright © 2016 Aneta. All rights reserved.
//

#import <JSONModel/JSONModel.h>

@interface GuidModel : JSONModel

@property BOOL isPermaLink;
@property (strong, nonatomic) NSString *text;



@end
