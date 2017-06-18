//
//  LBXScanLineAnimation.h
//
//  github:https://github.com/MxABC/LBXScan
//  Created by lbxia on 15/11/3.
//  Copyright © 2015年 lbxia. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface LBXScanNetAnimation : NSView



/**
 *  开始扫码网格效果
 *
 *  @param animationRect 显示在parentView中得区域
 *  @param parentView    动画显示在NSView
 *  @param image     扫码线的图像
 */
- (void)startAnimatingWithRect:(CGRect)animationRect InView:(NSView*)parentView Image:(NSImage*)image;

/**
 *  停止动画
 */
- (void)stopAnimating;

@end
