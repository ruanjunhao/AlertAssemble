//
//  UIView+JKAlert.h
//  AlertAssemble
//
//  Created by 四威 on 2016/7/28.
//  Copyright © 2016年 JeanKyle. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  标识类型
 */
typedef NS_ENUM(NSUInteger, JKInformStyle) {
    /**
     *  钩
     */
    JKInformStyleTick = 0,
    /**
     *  叉
     */
    JKInformStyleCross = 1 << 0,
};

/**
 *  取半函数
 *
 *  @param number 操作数
 *
 *  @return
 */
CGFloat half(CGFloat number);
/**
 *  两倍函数
 *
 *  @param number 操作数
 *
 *  @return
 */
CGFloat doubling(CGFloat number);

//屏幕宽度
#define SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
//屏幕高度
#define SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.height

@interface UIView (JKAlert)

//视图左边
@property (nonatomic, assign) CGFloat jk_x;
//视图顶部
@property (nonatomic, assign) CGFloat jk_y;
//视图宽度
@property (nonatomic, assign) CGFloat jk_width;
//视图高度
@property (nonatomic, assign) CGFloat jk_height;
//视图尺寸
@property (nonatomic, assign) CGSize jk_size;

@end
