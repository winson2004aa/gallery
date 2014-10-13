//
//  ViewController.h
//  gallery
//
//  Created by qa on 10/13/14.
//  Copyright (c) 2014 qa. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol NSGAlleryDelegate <NSObject>

@optional
-(void)imageSelected:(UIImageView*)image;
@end

@interface ViewController : UIViewController
-(id)initWithImages:(NSArray *)images;
@property (nonatomic, strong) NSArray *images;
@property (nonatomic, strong) NSMutableArray *imageViews;
@property (nonatomic, strong) id<NSGAlleryDelegate> delegate;

@end

