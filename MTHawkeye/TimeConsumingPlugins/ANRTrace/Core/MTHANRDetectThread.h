//
// Copyright (c) 2008-present, Meitu, Inc.
// All rights reserved.
//
// This source code is licensed under the license found in the LICENSE file in
// the root directory of this source tree.
//
// Created on: 2019/6/14
// Created by: David.Dai
//


#import <Foundation/Foundation.h>
#import "MTHANRRecord.h"

NS_ASSUME_NONNULL_BEGIN

typedef void (^MTHANRThreadResultBlock)(MTHANRRecord *anrRecord);

@interface MTHANRDetectThread : NSThread
@property (nonatomic, assign) BOOL shouldCaptureBackTrace;
@property (nonatomic, assign) double thresholdInSeconds;
@property (nonatomic, copy) MTHANRThreadResultBlock threadResultBlock;

- (void)startWithThresholdInSeconds:(double)thresholdInSeconds handler:(MTHANRThreadResultBlock)threadResultBlock;

@end

NS_ASSUME_NONNULL_END
