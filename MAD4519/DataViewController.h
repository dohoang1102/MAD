//
//  DataViewController.h
//  MAD4519
//
//  Created by Hugh Thomson Comer on 12/6/11.
//  Copyright (c) 2011 Cardinal Peak, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DataViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *dataLabel;
@property (strong, nonatomic) id dataObject;
@end
