/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSCalendar, NSData, NSDate, NSString, NSTimeZone;

@interface UIConcreteLocalNotification : UILocalNotification {
    NSString *alertAction;
    NSString *alertBody;
    NSString *alertLaunchImage;
    BOOL allowSnooze;
    int applicationIconBadgeNumber;
    NSString *customLockSliderLabel;
    NSDate *fireDate;
    BOOL fireNotificationsWhenAppRunning;
    BOOL hasAction;
    BOOL hideAlertTitle;
    BOOL interruptAudioAndLockDevice;
    BOOL isSystemAlert;
    int remainingRepeatCount;
    NSCalendar *repeatCalendar;
    unsigned int repeatInterval;
    BOOL resumeApplicationInBackground;
    BOOL showAlarmStatusBarItem;
    NSString *soundName;
    BOOL soundNameIsARingtone;
    NSTimeZone *timeZone;
    int totalRepeatCount;
    NSData *userInfoData;
}

- (void)_setUserInfoData:(id)arg1;
- (id)alertAction;
- (id)alertBody;
- (id)alertLaunchImage;
- (BOOL)allowSnooze;
- (int)applicationIconBadgeNumber;
- (void)clearNonSystemProperties;
- (int)compareFireDates:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customLockSliderLabel;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fireDate;
- (BOOL)fireNotificationsWhenAppRunning;
- (BOOL)hasAction;
- (unsigned int)hash;
- (BOOL)hideAlertTitle;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)interruptAudioAndLockDevice;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSystemAlert;
- (BOOL)isValid;
- (id)nextFireDateAfterDate:(id)arg1 localTimeZone:(id)arg2;
- (id)nextFireDateForLastFireDate:(id)arg1;
- (int)remainingRepeatCount;
- (id)repeatCalendar;
- (unsigned int)repeatInterval;
- (BOOL)resumeApplicationInBackground;
- (void)setAlertAction:(id)arg1;
- (void)setAlertBody:(id)arg1;
- (void)setAlertLaunchImage:(id)arg1;
- (void)setAllowSnooze:(BOOL)arg1;
- (void)setApplicationIconBadgeNumber:(int)arg1;
- (void)setCustomLockSliderLabel:(id)arg1;
- (void)setFireDate:(id)arg1;
- (void)setFireNotificationsWhenAppRunning:(BOOL)arg1;
- (void)setHasAction:(BOOL)arg1;
- (void)setHideAlertTitle:(BOOL)arg1;
- (void)setInterruptAudioAndLockDevice:(BOOL)arg1;
- (void)setIsSystemAlert:(BOOL)arg1;
- (void)setRemainingRepeatCount:(int)arg1;
- (void)setRepeatCalendar:(id)arg1;
- (void)setRepeatInterval:(unsigned int)arg1;
- (void)setResumeApplicationInBackground:(BOOL)arg1;
- (void)setShowAlarmStatusBarItem:(BOOL)arg1;
- (void)setSoundName:(id)arg1;
- (void)setSoundNameIsARingtone:(BOOL)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTotalRepeatCount:(int)arg1;
- (void)setUserInfo:(id)arg1;
- (BOOL)showAlarmStatusBarItem;
- (id)soundName;
- (BOOL)soundNameIsARingtone;
- (id)timeZone;
- (int)totalRepeatCount;
- (id)userInfo;

@end
