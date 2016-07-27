//
//  AppManager.h
//  iOSrss
//
//  Created by Aneta on 26.07.2016.
//  Copyright © 2016 Aneta. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^failureBlock)(id error);
typedef void (^successBlock)(id responseObject);

@interface AppManager : NSObject
-(void) downloadDataWithFailure: (failureBlock) failure success:(successBlock) success;
@end
