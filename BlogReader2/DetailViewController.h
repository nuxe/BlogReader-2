//
//  DetailViewController.h
//  BlogReader
//
//  Created by Class Account on 3/30/13.
//  Copyright (c) 2013 Kush Agrawal. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

//@property (strong, nonatomic) NSString detailItem;

@property (strong, nonatomic) id detailItem;
@property (strong, nonatomic) IBOutlet UIWebView *Browser123;

@property (strong, nonatomic) NSString *urlstr;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

