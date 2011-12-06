//
//  ModelController.h
//  MAD4519
//
//  Created by Hugh Thomson Comer on 12/6/11.
//  Copyright (c) 2011 Cardinal Peak, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>
- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;
@end
