//
//  FirstViewController.h
//  iOSrss
//
//  Created by Aneta on 24.07.2016.
//  Copyright © 2016 Aneta. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FirstViewController : UIViewController
{
    NSXMLParser *parser;
    NSMutableArray *feeds;
    NSMutableDictionary *item;
    NSMutableString *title;
    NSString *element;
    
}



@end

