//
//  AppManager.m
//  iOSrss
//
//  Created by Aneta on 26.07.2016.
//  Copyright © 2016 Aneta. All rights reserved.
//

#import "AppManager.h"
#import "AFNetworking.h"
#import "XMLReader.h"
#import "JSONModel.h"
#import "XMLMod.h"
#import "JSONModelLib.h"


//#import "JSONModel.m"

@implementation AppManager

-(void) downloadDataWithFailure: (failureBlock) failure success:(successBlock) success
{
    AFHTTPRequestOperationManager *manager = [AFHTTPRequestOperationManager manager];
    [manager setResponseSerializer:[AFXMLParserResponseSerializer new]];
    manager.responseSerializer.acceptableContentTypes = [NSSet setWithObject:@"application/rss+xml"];
    manager.responseSerializer = [AFHTTPResponseSerializer serializer];

    
    [manager GET:@"https://www.nasa.gov/rss/dyn/breaking_news.rss/item" parameters:nil success:^(AFHTTPRequestOperation *operation, id responseObject) {
        NSData *responseData = [[NSData alloc]init];
        responseData = responseObject;
        NSString *responseString = [[NSString alloc] initWithData:responseObject encoding:NSUTF8StringEncoding];
        NSDictionary *dictionaryXMLString = [XMLReader dictionaryForXMLString:responseString error:nil];
        NSError *errorJsonSerialization=nil;
        NSData *jsonData = [NSJSONSerialization dataWithJSONObject:dictionaryXMLString
                                                           options:NSJSONWritingPrettyPrinted // Pass 0 if you don't care about the readability of the generated string
                                                             error:&errorJsonSerialization];
        if(errorJsonSerialization)
            NSLog(@"%@",errorJsonSerialization.description);
        
        NSDictionary *deserializedDictionary=[[NSDictionary alloc]init];
        deserializedDictionary = [self JSONdeserialization:jsonData];

        XMLMod * xmlModel=[[XMLMod alloc] initWithDictionary:deserializedDictionary error:nil];

        NSLog(@"Source text: %@",xmlModel.rss.channel.item[0].source.text);
        
        int i;
        for (i = 0; i < [xmlModel.rss.channel.item count]; i++) {
            id myArrayElement = [ xmlModel.rss.channel.item objectAtIndex:i];
            NSLog(@"%@", myArrayElement);
            
            
                }
        //[xmlModel.rss.channel.item indexOfObject:@"link"];
        
        
    } failure:^(AFHTTPRequestOperation *operation, NSError *error) {
        NSLog(@"Error: %@", error);
        failure(error);
    }];
}




- (NSDictionary *) JSONdeserialization: (NSData *) jsonData
{
    NSError *errorJsonDeserialization=nil;
    
id jsonObject = [NSJSONSerialization
                 JSONObjectWithData: jsonData
                 options:NSJSONReadingAllowFragments
                 error:&errorJsonDeserialization ];

if (jsonObject != nil &&
    errorJsonDeserialization == nil ){
    NSLog(@"Sukces desarilazcji..." );
    if ([jsonObject isKindOfClass:[NSDictionary class ]]){
        NSDictionary *deserializedDictionary = (NSDictionary *)jsonObject ;
        return deserializedDictionary;
    }
} else
    NSLog(@"Błąd w trakcie desarlizacji" );
    
    NSDictionary *emptyDictionary=nil;
    return emptyDictionary;
}



@end
