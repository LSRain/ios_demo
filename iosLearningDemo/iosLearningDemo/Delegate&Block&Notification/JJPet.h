//
//  JJPet.h
//  iosLearningDemo
//
//  Created by jieyuan on 2017/6/12.
//  Copyright © 2017年 jieyuan. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol JJPetDelegate <NSObject>

- (NSString *)howThink;

@end

@interface JJPet : NSObject

- (void)think;

@end
