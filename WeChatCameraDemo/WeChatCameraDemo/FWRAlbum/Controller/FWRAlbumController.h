//
//  FWRAlbumController.h
//  WeChatCameraDemo
//
//  Created by 冯伟如 on 15/8/28.
//  Copyright (c) 2015年 冯伟如. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AssetsLibrary/AssetsLibrary.h>

@protocol FWRAlbumControllerDelegate <NSObject>

- (void)getPhotosWithArray:(NSArray *)photosArray;

@end

@interface FWRAlbumController : UIViewController

- (instancetype)initWithPhoto:(ALAssetsGroup *)group;

@property (nonatomic, assign) id<FWRAlbumControllerDelegate> delegate;

@end
