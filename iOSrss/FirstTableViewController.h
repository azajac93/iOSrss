//
//  FirstTableViewController.h
//  iOSrss
//
//  Created by Aneta on 26.07.2016.
//  Copyright © 2016 Aneta. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FirstTableViewController : UITableViewController <NSXMLParserDelegate>

@property (strong, nonatomic) IBOutlet UITableView *tableView;

@end
