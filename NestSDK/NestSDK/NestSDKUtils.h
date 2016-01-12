#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#pragma mark macros

#pragma mark const

#pragma mark enum

#pragma mark typedef

#pragma mark Protocol

@interface NestSDKUtils : NSObject

#pragma mark Properties

#pragma mark Methods

+ (UIViewController *)viewControllerForView:(UIView *)view;

+ (NSDate *)dateWithISO8601FormatDateString:(NSString *)dateString;

+ (NSString *)iso8601FormatDateStringWithDate:(NSDate *)date;

@end