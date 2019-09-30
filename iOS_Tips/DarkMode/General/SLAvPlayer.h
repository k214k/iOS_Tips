//
//  SLAvPlayer.h
//  DarkMode
//
//  Created by wsl on 2019/9/20.
//  Copyright © 2019 wsl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

///  简易播放器
@interface SLAvPlayer : NSObject
/// 播放源
@property (nonatomic, strong) NSURL *url;
/// 是否循环播放 默认YES
@property (nonatomic, assign) BOOL isLoopPlay;
/// 视频展示区域  显示器
@property (nonatomic, strong, nullable) UIView *monitor;

+ (instancetype)sharedAVPlayer;
///开始播放
- (void)play;
///暂停
- (void)pause;
///结束播放
- (void)stop;
@end

NS_ASSUME_NONNULL_END