//
//  EnclosureModel.h
//  iOSrss
//
//  Created by Aneta on 28.07.2016.
//  Copyright © 2016 Aneta. All rights reserved.
//

#import <JSONModel/JSONModel.h>

@interface EnclosureModel : JSONModel

@property (nonatomic) NSString *lenght;
@property (strong,nonatomic) NSString *text;
@property (strong,nonatomic) NSString *type;
@property (strong,nonatomic) NSString *url;


@end
