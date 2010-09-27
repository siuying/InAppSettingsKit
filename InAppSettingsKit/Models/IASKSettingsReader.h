//
//  IASKSettingsReader.h
//  http://www.inappsettingskit.com
//
//  Copyright (c) 2009:
//  Luc Vandal, Edovia Inc., http://www.edovia.com
//  Ortwin Gentz, FutureTap GmbH, http://www.futuretap.com
//  All rights reserved.
// 
//  It is appreciated but not required that you give credit to Luc Vandal and Ortwin Gentz, 
//  as the original authors of this code. You can give credit in a blog post, a tweet or on 
//  a info page of your app. Also, the original authors appreciate letting them know if you use this code.
//
//  This code is licensed under the BSD license that is available at: http://www.opensource.org/licenses/bsd-license.php
//

#import <Foundation/Foundation.h>

#define kIASKPreferenceSpecifiers             @"PreferenceSpecifiers"
#define kIASKType                             @"Type"
#define kIASKTitle                            @"Title"
#define kIASKKey                              @"Key"
#define kIASKFile                             @"File"
#define kIASKDefaultValue                     @"DefaultValue"
#define kIASKMinimumValue                     @"MinimumValue"
#define kIASKMaximumValue                     @"MaximumValue"
#define kIASKTrueValue                        @"TrueValue"
#define kIASKFalseValue                       @"FalseValue"
#define kIASKIsSecure                         @"IsSecure"
#define KIASKKeyboardType                     @"KeyboardType"
#define kIASKAutocapitalizationType           @"AutocapitalizationType"
#define kIASKAutoCorrectionType               @"AutocorrectionType"
#define kIASKValues                           @"Values"
#define kIASKTitles                           @"Titles"
#define kIASKKeyboardAlphabet                 @"Alphabet"
#define kIASKKeyboardNumbersAndPunctuation    @"NumbersAndPunctuation"
#define kIASKKeyboardNumberPad                @"NumberPad"
#define KIASKKeyboardURL                      @"URL"
#define kIASKKeyboardEmailAddress             @"EmailAddress"
#define kIASKAutoCapNone                      @"None"
#define kIASKAutoCapSentences                 @"Sentences"
#define kIASKAutoCapWords                     @"Words"
#define kIASKAutoCapAllCharacters             @"AllCharacters"
#define kIASKAutoCorrDefault                  @"Default"
#define kIASKAutoCorrNo                       @"No"
#define kIASKAutoCorrYes                      @"Yes"
#define kIASKMinimumValueImage                @"MinimumValueImage"
#define kIASKMaximumValueImage                @"MaximumValueImage"

#define kIASKPSGroupSpecifier                 @"PSGroupSpecifier"
#define kIASKPSToggleSwitchSpecifier          @"PSToggleSwitchSpecifier"
#define kIASKPSMultiValueSpecifier            @"PSMultiValueSpecifier"
#define kIASKPSSliderSpecifier                @"PSSliderSpecifier"
#define kIASKPSTitleValueSpecifier            @"PSTitleValueSpecifier"
#define kIASKPSTextFieldSpecifier             @"PSTextFieldSpecifier"
#define kIASKDDOpenURLSpecifier               @"PSOpenURLSpecifier"
#define kIASKDDInAppOpenURLSpecifier          @"PSInAppOpenURLSpecifier"

#define kIASKPSChildPaneSpecifier             @"PSChildPaneSpecifier"

#define kIASKBundleFolder                     @"Settings.bundle"
#define kIASKBundleFilename                   @"Root.plist"

#define kIASKAppSettingChanged                @"kAppSettingChanged"

#define kIASKSectionHeaderIndex               0

#define kIASKSliderNoImagesX                  21
#define kIASKSliderNoImagesWidth              278
#define kIASKSliderBothImagesX                53
#define kIASKSliderBothImagesWidth            214
#define kIASKSliderOneImageWidth              246

#define kIASKTableWidth                       320
#define kIASKSpacing                          5
#define kIASKMinLabelWidth                    97
#define kIASKMinValueWidth                    35
#define kIASKPaddingLeft                      9
#define kIASKPaddingRight                     10

#define kIASKLabelFontSize                    17

@class IASKSpecifier;

@interface IASKSettingsReader : NSObject {
    NSString        *_path;
    NSDictionary    *_settingsBundle;
    NSArray         *_dataSource;
    NSBundle        *_bundle;
}

- (id)initWithFile:(NSString*)file;
- (NSInteger)numberOfSections;
- (NSInteger)numberOfRowsForSection:(NSInteger)section;
- (IASKSpecifier*)specifierForIndexPath:(NSIndexPath*)indexPath;
- (IASKSpecifier*)specifierForKey:(NSString*)key;
- (NSString*)titleForSection:(NSInteger)section;
- (NSString*)titleForStringId:(NSString*)stringId;
- (NSString*)bundlePath;
- (NSString*)pathForImageNamed:(NSString*)image;

@property (nonatomic, retain) NSString      *path;
@property (nonatomic, retain) NSDictionary  *settingsBundle;
@property (nonatomic, retain) NSArray       *dataSource;

@end
