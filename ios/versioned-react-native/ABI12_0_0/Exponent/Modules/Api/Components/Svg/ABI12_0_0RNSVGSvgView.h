/**
 * Copyright (c) 2015-present, Horcrux.
 * All rights reserved.
 *
 * This source code is licensed under the MIT-style license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <UIKit/UIKit.h>
#import "ABI12_0_0RNSVGBrushCOnverter.h"
#import "ABI12_0_0RNSVGContainer.h"

@class ABI12_0_0RNSVGNode;

@interface ABI12_0_0RNSVGSvgView : UIView <ABI12_0_0RNSVGContainer>

@property (nonatomic, assign) BOOL responsible;

/**
 * define <ClipPath></ClipPath> content as clipPath template.
 */
- (void)defineClipPath:(__kindof ABI12_0_0RNSVGNode *)clipPath clipPathRef:(NSString *)clipPathRef;
- (ABI12_0_0RNSVGNode *)getDefinedClipPath:(NSString *)clipPathRef;
- (void)defineTemplate:(__kindof ABI12_0_0RNSVGNode *)template templateRef:(NSString *)templateRef;
- (ABI12_0_0RNSVGNode *)getDefinedTemplate:(NSString *)tempalteRef;
- (void)defineBrushConverter:(ABI12_0_0RNSVGBrushConverter *)brushConverter brushConverterRef:(NSString *)brushConverterRef;
- (ABI12_0_0RNSVGBrushConverter *)getDefinedBrushConverter:(NSString *)brushConverterRef;
- (NSString *)getDataURL;

@end
