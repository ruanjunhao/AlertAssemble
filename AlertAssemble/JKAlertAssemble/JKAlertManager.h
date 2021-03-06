//
//  JKAlertManager.h
//  AlertAssemble
//
//  Created by 四威 on 2016/8/1.
//  Copyright © 2016年 JeanKyle. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JKInformView.h"

//快速引用单例
#define JK_M [JKAlertManager manager]

//弹窗管理器
@interface JKAlertManager : NSObject

//可交互视图
@property (nonatomic, strong) UIView *maskView;
//标识视图
@property (nonatomic, strong) JKInformView *informView;
//容器视图
@property (nonatomic, strong) UIView *containView;
//文本视图
@property (nonatomic, strong) UILabel *textLabel;
//等待视图
@property (nonatomic, strong) UIActivityIndicatorView *waitView;
//主窗口是否存在弹出
@property (nonatomic, assign) BOOL isAlerted;
//主窗口
@property (nonatomic, strong) UIWindow *mainWindow;

//快速创建
+ (instancetype)manager;
//主窗口移除所有弹窗
- (void)clearAllAlertViews;

@end

