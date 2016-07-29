//
//  SourceModel.h
//  iOSrss
//
//  Created by Aneta on 29.07.2016.
//  Copyright © 2016 Aneta. All rights reserved.
//

#import <JSONModel/JSONModel.h>

@interface SourceModel : JSONModel
@property (strong,nonatomic) NSString *text;
@property (strong,nonatomic) NSString *url;

@end
