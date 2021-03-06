/*
 Copyright 2017-present the Material Components for iOS authors. All Rights Reserved.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#import <UIKit/UIKit.h>

#import "MaterialButtons.h"

/** The elevation of the floating action button. */
typedef NS_ENUM(NSInteger, MDCBottomAppBarFloatingButtonElevation) {
  MDCBottomAppBarFloatingButtonElevationPrimary = 0,
  MDCBottomAppBarFloatingButtonElevationSecondary = 1
};

/** The position of the floating action button. */
typedef NS_ENUM(NSInteger, MDCBottomAppBarFloatingButtonPosition) {
  MDCBottomAppBarFloatingButtonPositionCenter = 0,
  MDCBottomAppBarFloatingButtonPositionLeading = 1,
  MDCBottomAppBarFloatingButtonPositionTrailing = 2
};

/**
 A bottom app bar view with an embedded floating button.
 
 The bottom app bar is a bar docked at the bottom of the screen. A floating action button is
 provided for a primary action.
 */
@interface MDCBottomAppBarView : UIView

/**
 Is the floating button on the bottom bar hidden.
 Default is NO.
 */
@property(nonatomic, assign, getter=isFloatingButtonHidden) BOOL floatingButtonHidden;

/**
 The elevation of the floating action button.
 Default is MDCBottomAppBarFloatingButtonElevationPrimary.
 */
@property(nonatomic, assign) MDCBottomAppBarFloatingButtonElevation floatingButtonElevation;

/**
 The position of the floating action button.
 Default is MDCBottomAppBarFloatingButtonPositionCenter.
 */
@property(nonatomic, assign) MDCBottomAppBarFloatingButtonPosition floatingButtonPosition;

/**
 The floating button on the bottom bar. This button is exposed for customizability.
 */
@property(nonatomic, strong, nonnull, readonly) MDCFloatingButton *floatingButton;

/**
 Navigation bar items that precede the floating action button. There is no limit to the number of
 buttons that can be added, but button bar width overflow is not handled.
 */
@property(nonatomic, copy, nullable) NSArray<UIBarButtonItem *> *leadingBarButtonItems;

/**
 Navigation bar items that trail the floating action button. There is no limit to the number of
 buttons that can be added, but button bar width overflow is not handled.
 */
@property(nonatomic, copy, nullable) NSArray<UIBarButtonItem *> *trailingBarButtonItems;

/**
 Sets the visibility of the floating action button.
 
 @param animated Enable or disable animation.
 */
- (void)setFloatingButtonHidden:(BOOL)floatingButtonHidden animated:(BOOL)animated;

/**
 Sets the elevation of the floating action button. Note, if the set elevation is the same as the
 current elevation there is no change in the elevation nor animation.

 @param animated Enable or disable animation.
 */
- (void)setFloatingButtonElevation:(MDCBottomAppBarFloatingButtonElevation)floatingButtonElevation
                          animated:(BOOL)animated;

/**
 Sets the position of the floating action button. Note, if the set position is the same as the
 current position there is no change in the position nor animation.
 
 @param animated Enable or disable animation.
 */
- (void)setFloatingButtonPosition:(MDCBottomAppBarFloatingButtonPosition)floatingButtonPosition
                         animated:(BOOL)animated;

@end
