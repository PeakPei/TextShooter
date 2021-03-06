//
//  BIDAppDelegate.h
//  TextShooter
//
//  Created by JN on 2013-12-6.
//  Copyright (c) 2013 Apress. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ProductSpecFetcher;
@protocol ProductSpecFetcherDelegate;

@interface BIDAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) ProductSpecFetcher *productSpecFetcher;

@end
