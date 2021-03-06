/*
 * Copyright 2014 Google Inc. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <UIKit/UIKit.h>

#import <UriBeacon/UriBeacon.h>

@protocol ConfigureViewControllerDelegate;

@interface ConfigureViewController : UIViewController

@property(nonatomic, weak) id<ConfigureViewControllerDelegate> delegate;

@property(nonatomic, retain) UBConfigurableUriBeacon *beacon;

@end

@protocol ConfigureViewControllerDelegate

// This method is called when the configuration panel is dismissed, when
// validated or cancelled.
- (void)configurationViewControllerDismissed:
        (ConfigureViewController *)controller;

@end
