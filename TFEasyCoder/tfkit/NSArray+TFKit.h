//
//  NSArray+TFKit.h
//  TFEasyCoderDemo
//
//  Created by 融数 on 16/12/8.
//  Copyright © 2016年 融数. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"
@interface NSArray (TFKit)


/**
 *  安全获取数组元素
 *
 *  @param index 数据下标
 *
 *  @return 数据
 */
-(id _Nonnull)TF_CODE_PRE(objectAtIndexSafe):(NSUInteger)index;


@end