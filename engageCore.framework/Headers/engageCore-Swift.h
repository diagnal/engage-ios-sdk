// Generated by Apple Swift version 3.0.2 (swiftlang-800.0.63 clang-800.0.42.1)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
@import UIKit;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class EngageEvent;

/**
  EngageEvent creator for Advertisement playback events
*/
SWIFT_CLASS("_TtC10engageCore25AdvertisementEventCreator")
@interface AdvertisementEventCreator : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
/**
  Intialize the event creator using specified content id and advertisement id
  <ul>
    <li>
      Parameters:
    </li>
    <li>
      contentId: Identifier of the content in which ad is shown
    </li>
    <li>
      advertisementId: Identifier of the advertisement being shown
    </li>
  </ul>
*/
- (nonnull instancetype)initWithContentId:(NSString * _Nonnull)contentId advertisementId:(NSString * _Nonnull)advertisementId OBJC_DESIGNATED_INITIALIZER;
/**
  Set the type of the advertisement being shown
  \param type Type of the advertisement being shown


  returns:
  AdvertisementEventCreator object after updating the adType
*/
- (AdvertisementEventCreator * _Nonnull)putAdTypeWithType:(NSString * _Nonnull)type;
/**
  Set the total duration of the advertisement being shown
  \param type duration of the advertisement being shown


  returns:
  AdvertisementEventCreator object after updating the adDuration
*/
- (AdvertisementEventCreator * _Nonnull)putAdDurationWithDuration:(NSString * _Nonnull)duration;
/**
  Set the progress of the advertisement being shown
  \param type Progress of the advertisement being shown


  returns:
  AdvertisementEventCreator object after updating the adProgress
*/
- (AdvertisementEventCreator * _Nonnull)putAdProgressWithType:(NSString * _Nonnull)type;
/**
  Creates EngageEvent representing playback start event of the advertisement

  returns:
  EngageEvent representing playback start event of the advertisement
*/
- (EngageEvent * _Nonnull)onAdPlaybackStarted;
/**
  Creates EngageEvent representing playback complete event of the advertisement

  returns:
  EngageEvent representing playback complete event of the advertisement
*/
- (EngageEvent * _Nonnull)onAdPlaybackCompleted;
/**
  EngageEvent representing playback skip event of the advertisement

  returns:
  EngageEvent representing playback skip event of the advertisement
*/
- (EngageEvent * _Nonnull)onAdPlaybackSkipped;
@end


/**
  <#Description#>
*/
SWIFT_CLASS("_TtC10engageCore23ApplicationEventCreator")
@interface ApplicationEventCreator : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (EngageEvent * _Nonnull)onAppLaunch;
@end


/**
  EngageEvent creator for Media Content events
*/
SWIFT_CLASS("_TtC10engageCore19ContentEventCreator")
@interface ContentEventCreator : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
/**
  Initializes the event creator using specified content id
  \param contentId Identifier of the content for which events are created

*/
- (nonnull instancetype)initWithContentId:(NSString * _Nonnull)contentId OBJC_DESIGNATED_INITIALIZER;
/**
  Set the title of the content
  \param title Title of the content


  returns:
  ContentEventCreator after updating title of content
*/
- (ContentEventCreator * _Nonnull)putTitleWithTitle:(NSString * _Nonnull)title;
/**
  Set the type of the content
  \param type Type of the content Example: Movies, series, news etc.


  returns:
  ContentEventCreator after updating type of content
*/
- (ContentEventCreator * _Nonnull)putTypeWithType:(NSString * _Nonnull)type;
/**
  Set the source of the content
  \param source Ex: search, section, category, favourite, recently-watched, download


  returns:
  ContentEventCreator after updating source of content
*/
- (ContentEventCreator * _Nonnull)putSourceWithSource:(NSString * _Nonnull)source;
/**
  Creates EngageEvent representing content view

  returns:
  EngageEvent representing content view
*/
- (EngageEvent * _Nonnull)onContentView;
/**
  Creates EngageEvent representing content share

  returns:
  EngageEvent representing content share
*/
- (EngageEvent * _Nonnull)onContentShare;
/**
  Creates EngageEvent representing content shared with another application
  \param sharedWith External application with which content is shared


  returns:
  EngageEvent representing content shared with another application
*/
- (EngageEvent * _Nonnull)onContentShareWithSharedWith:(NSString * _Nonnull)sharedWith;
/**
  Creates EngageEvent representing content added favourites

  returns:
  EngageEvent representing content added favourites
*/
- (EngageEvent * _Nonnull)onContentAddedToFavourites;
/**
  Creates EngageEvent representing content removed from favourites

  returns:
  EngageEvent representing content removed from favourites
*/
- (EngageEvent * _Nonnull)onContentFavouriteRemoved;
/**
  Creates EngageEvent representing all content favourites cleared

  returns:
  EngageEvent representing all content favourites cleared
*/
- (EngageEvent * _Nonnull)onContentFavouritesCleared;
@end


/**
  EngageEvent creator for Content Download events
*/
SWIFT_CLASS("_TtC10engageCore20DownloadEventCreator")
@interface DownloadEventCreator : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
/**
  Initializes the event creator using specified download content id
  \param contentId identifier of the content

*/
- (nonnull instancetype)initWithContentId:(NSString * _Nonnull)contentId OBJC_DESIGNATED_INITIALIZER;
/**
  Set the title of the content
  \param title Title of the content


  returns:
  DownloadEventCreator object after updating title of content
*/
- (DownloadEventCreator * _Nonnull)putContentTitleWithTitle:(NSString * _Nonnull)title;
/**
  Set the type of the content
  \param type Type of the content Example: Movies, series, news etc.


  returns:
  DownloadEventCreator object after updating type of content
*/
- (DownloadEventCreator * _Nonnull)putContentTypeWithType:(NSString * _Nonnull)type;
/**
  Set the source of the content
  \param source Source of the content Example: Section, search, favourite, downloads etc.


  returns:
  DownloadEventCreator object after updating source of content
*/
- (DownloadEventCreator * _Nonnull)putContentSourceWithSource:(NSString * _Nonnull)source;
/**
  Creates EngageEvent representing content download started

  returns:
  EngageEvent representing content download started
*/
- (EngageEvent * _Nonnull)onDownloadStarted;
/**
  Creates EngageEvent representing content download paused

  returns:
  EngageEvent representing content download paused
*/
- (EngageEvent * _Nonnull)onDownloadPaued;
/**
  Creates EngageEvent representing content download resumed

  returns:
  EngageEvent representing content download resumed
*/
- (EngageEvent * _Nonnull)onDownloadResumed;
/**
  Creates EngageEvent representing content download stopped

  returns:
  EngageEvent representing content download stopped
*/
- (EngageEvent * _Nonnull)onDownloadStopped;
/**
  Creates EngageEvent representing content download completed

  returns:
  EngageEvent representing content download completed
*/
- (EngageEvent * _Nonnull)onDownloadCompleted;
/**
  Creates EngageEvent representing content download error occurred

  returns:
  EngageEvent representing content download error occurred
*/
- (EngageEvent * _Nonnull)onDownloadError;
@end

@class UIApplication;
@class Traits;
@class NotificationData;

SWIFT_CLASS("_TtC10engageCore6Engage")
@interface Engage : NSObject
/**
  Set the debug value as true to print all useful informations in console.
*/
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL ENABLE_LOGGING;)
+ (BOOL)ENABLE_LOGGING;
+ (void)setENABLE_LOGGING:(BOOL)value;
/**
  Initialize the engage SDK in the client application.
  \param application UIApplication Instance

  \param clientId ENGAGE_CLIENT_ID

  \param projectId ENGAGE_PROJECT_ID

  \param customCSSUrl CSS url for customizing Campaign UI

*/
+ (void)initializeWithApplication:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary<UIApplicationLaunchOptionsKey, id> * _Nullable)launchOptions accountId:(NSString * _Nonnull)accountId projectId:(NSString * _Nonnull)projectId customCSSUrl:(NSString * _Nullable)customCSSUrl SWIFT_METHOD_FAMILY(none);
/**
  Sets the user profile specific to current user
  Setting the user profile details helps in targeting users specific to a gender, age group or country.
  This also enable to run user personalized campaigns across devices.
  \param traits Instance of Traits class.

*/
+ (void)identifyWithTraits:(Traits * _Nonnull)traits;
/**
  Logs app events to Engage. These events are used trigger campaigns, track app usage etc.
  \param eventName name of the event

  \param params Parameters of the event.

*/
+ (void)trackWithEventName:(NSString * _Nonnull)eventName params:(NSDictionary * _Nonnull)params;
/**
  Logs engage Default supported events to Engage. These events are used trigger campaigns, track app usage etc.
  \param eventName name of the event

  \param params Parameters of the event.

*/
+ (void)trackWithEvent:(EngageEvent * _Nonnull)event;
/**
  Enables or disables campaign dialogs in the app.
  Individual campaign dialogs may be handled separately by implementing registerForCampaignEvents.
  Campaign dialogs are enabled by default
  \param enabled use true or false based on whether to show campaigns or not.

*/
+ (void)setCampaignDialogsEnabledWithEnabled:(BOOL)enabled;
/**
  Enables or disables Developer Mode of EngageMent SDK.
  ENABLE_CAPTURE_EVENTS is disabled by default
  \param enabled set true or false to enable/disable ENABLE_CAPTURE_EVENTS is SDK.

*/
+ (void)ENABLE_CAPTURE_EVENTSWithEnabled:(BOOL)enabled;
/**
  Register to engageSDK PushNotification Campaign
  Pass deviceToken to engage SDK after registering for push notifications.
  \param deviceToken deviceToken recieved from
  func application(application: UIApplication, didRegisterForRemoteNotificationsWithDeviceToken deviceToken: NSData)

*/
+ (void)registerForRemoteNotificationsWithDeviceTokenWithDeviceToken:(NSData * _Nonnull)deviceToken;
/**
  Inform Engage SDK When a notification is recieved.
  \param userInfo userInfo recieved from notification


  returns:
  This function will return an Instance of NotificationData if the notification recieved was from engage,
  It will return a nil value if the notification is recieved from an unknown source.
*/
+ (NotificationData * _Nullable)onNotificationRecievedWithUserInfo:(NSDictionary * _Nonnull)userInfo;
/**
  Inform Engage SDK that the notification is Opened/Interacted by the user.
  \param userInfo userInfo recieved from notification


  returns:
  This function will return an Instance of NotificationData if the notification recieved was from engage,
  It will return a nil value if the notification is recieved from an unknown source.
*/
+ (NotificationData * _Nullable)onNotificationOpenedWithUserInfo:(NSDictionary * _Nonnull)userInfo;
/**
  Shutdown the engage SDK.
  All functionalities related to SDK wil be stopped immediately after calling this method.
  Eg. It will clear all the user traits informations,stop tracking events, stops campaigns etc.
  Inorder to start the SDK functionality again , client application must call identify(traits : Traits) method.
*/
+ (void)shutDown;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC10engageCore14EngageCampaign")
@interface EngageCampaign : NSObject
/**
  The action string recieved from campaign
*/
@property (nonatomic, copy) NSString * _Nullable actionString;
/**
  CampaignId of the current campaign
*/
@property (nonatomic, copy) NSString * _Nullable campaignId;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/**
  Represents the event to be tracked using Engage.track(EngageEvent).
*/
SWIFT_CLASS("_TtC10engageCore11EngageEvent")
@interface EngageEvent : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
/**
  Initializes an event with the specified name
  \param aEventName Name of event

*/
- (nonnull instancetype)initWithAEventName:(NSString * _Nonnull)aEventName OBJC_DESIGNATED_INITIALIZER;
/**
  Add an attribute to the event
  \param name Name of the attribute

  \param value Value of the attribute


  returns:
  EngageEvent object after adding the attribute
*/
- (EngageEvent * _Nonnull)addAttributeWithName:(NSString * _Nonnull)name value:(id _Nonnull)value;
@end


@interface NSDate (SWIFT_EXTENSION(engageCore))
@end


SWIFT_CLASS("_TtC10engageCore19NotificationActions")
@interface NotificationActions : NSObject
@property (nonatomic, readonly, copy) NSString * _Nullable identifier;
@property (nonatomic, readonly, copy) NSString * _Nullable title;
@property (nonatomic, readonly, copy) NSString * _Nullable actionString;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC10engageCore16NotificationData")
@interface NotificationData : NSObject
/**
  CampaignId recieved from the notification
*/
@property (nonatomic, readonly, copy) NSString * _Nullable campaignId;
/**
  Type of Content
*/
@property (nonatomic, readonly, copy) NSString * _Nullable type;
/**
  ContentId of the content
*/
@property (nonatomic, readonly, copy) NSString * _Nullable url;
/**
  Push Notification title recieved from userInfo dictionary
*/
@property (nonatomic, readonly, copy) NSString * _Nullable title;
/**
  Push Notification subTitle recieved from userInfo dictionary
*/
@property (nonatomic, readonly, copy) NSString * _Nullable subTitle;
/**
  Push Notification message recieved from userInfo dictionary
*/
@property (nonatomic, readonly, copy) NSString * _Nullable message;
/**
  Bool value representing whether the campaign recieved is a preview campaign
*/
@property (nonatomic, readonly) BOOL isCampaignPreview;
/**
  Campaign Id of preview campaign.
*/
@property (nonatomic, readonly, copy) NSString * _Nullable campaignPreviewId;
@property (nonatomic, readonly, copy) NSArray<NotificationActions *> * _Nullable notificationActions;
/**
  Full notification dictionary.
*/
@property (nonatomic, readonly, copy) NSDictionary * _Nullable notificationUserInfo;
/**
  Disable default init method from outside.
*/
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
/**
  Get instance of NotificationData from push notification userinfo dictionary.
  \param remoteNotificationUserInfo userinfo dictionary recieved from notification


  returns:
  Instance of NotificationData
*/
+ (NotificationData * _Nullable)getNotificationDataWithRemoteNotificationUserInfo:(NSDictionary * _Nonnull)remoteNotificationUserInfo;
@end


/**
  EngageEvent creator for Media Playback events
*/
SWIFT_CLASS("_TtC10engageCore18PlayerEventCreator")
@interface PlayerEventCreator : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
/**
  Initializes the event creator using specified content id
  \param contentId Identifier of the content for which events are created

*/
- (nonnull instancetype)initWithContentId:(NSString * _Nonnull)contentId OBJC_DESIGNATED_INITIALIZER;
/**
  Set the type of the content
  \param type Type of the content


  returns:
  PlayerEventCreator object after updating type of content
*/
- (PlayerEventCreator * _Nonnull)putContentTypeWithType:(NSString * _Nonnull)type;
/**
  Set the title of the content
  \param title Title of the content


  returns:
  PlayerEventCreator object after updating type of content
*/
- (PlayerEventCreator * _Nonnull)putContentTitleWithTitle:(NSString * _Nonnull)title;
/**
  Set the mode by which content is played
  \param mode Mode ,Example portrait, landscape, chrome cast, picture-in-picture etc.


  returns:
  PlayerEventCreator object after updating displayMode
*/
- (PlayerEventCreator * _Nonnull)putDisplayModeWithMode:(NSString * _Nonnull)mode;
/**
  Set the duration of playback
  \param duration Duration of playback


  returns:
  PlayerEventCreator object after updating duration
*/
- (PlayerEventCreator * _Nonnull)putDurationWithDuration:(double)duration;
/**
  Set the current video quality
  \param videoQuality Video quality


  returns:
  PlayerEventCreator object after updating videoQuality
*/
- (PlayerEventCreator * _Nonnull)putContentVideoQualityWithVideoQuality:(NSString * _Nonnull)videoQuality;
/**
  Set the progress of playback
  \param progress Progress of playback


  returns:
  PlayerEventCreator object after updating progress of playback
*/
- (PlayerEventCreator * _Nonnull)putProgressWithProgress:(double)progress;
/**
  Set the playback starting timestamp
  \param time Playback starting timestamp


  returns:
  PlayerEventCreator object after updating startTime of playback
*/
- (PlayerEventCreator * _Nonnull)putStartTimeWithTime:(double)time;
/**
  Set the playback ending timestamp
  \param time Playback ending timestamp


  returns:
  PlayerEventCreator object after updating playback endTime
*/
- (PlayerEventCreator * _Nonnull)putEndTimeWithTime:(double)time;
/**
  Set the subtitle language
  \param aLangCode Subtitle language


  returns:
  PlayerEventCreator object after updating subtitle language
*/
- (PlayerEventCreator * _Nonnull)putSubtitleLanguageWithALangCode:(NSString * _Nonnull)aLangCode;
/**
  Set the audio language
  \param aLangCode Audio language


  returns:
  PlayerEventCreator object after updating Audio language
*/
- (PlayerEventCreator * _Nonnull)putAudioLanguageWithALangCode:(NSString * _Nonnull)aLangCode;
/**
  Set the content genre
  \param genre Content genre


  returns:
  PlayerEventCreator object after updating content genre
*/
- (PlayerEventCreator * _Nonnull)putGenreWithGenre:(NSString * _Nonnull)genre;
/**
  Creates EngageEvent representing playback start

  returns:
  EngageEvent representing playback start
*/
- (EngageEvent * _Nonnull)onPlaybackStarted;
/**
  Creates EngageEvent representing playback resume

  returns:
  EngageEvent representing playback resume
*/
- (EngageEvent * _Nonnull)onPlaybackResumed;
/**
  Creates EngageEvent representing playback pause

  returns:
  EngageEvent representing playback pause
*/
- (EngageEvent * _Nonnull)onPlaybackPaused;
/**
  Creates EngageEvent representing playback buffering

  returns:
  EngageEvent representing playback buffering
*/
- (EngageEvent * _Nonnull)onPlaybackBuffering;
/**
  Creates EngageEvent representing playback seek

  returns:
  EngageEvent representing playback seek
*/
- (EngageEvent * _Nonnull)onPlaybackSeek;
/**
  Creates EngageEvent representing playback stop

  returns:
  EngageEvent representing playback stop
*/
- (EngageEvent * _Nonnull)onPlaybackStopped;
/**
  Creates EngageEvent representing playback complete

  returns:
  EngageEvent representing playback complete
*/
- (EngageEvent * _Nonnull)onPlaybackCompleted;
/**
  Creates EngageEvent representing playback error

  returns:
  EngageEvent representing playback error
*/
- (EngageEvent * _Nonnull)onPlaybackError;
/**
  Creates EngageEvent representing audio/video/subtitle track change

  returns:
  EngageEvent representing audio/video/subtitle track change
*/
- (EngageEvent * _Nonnull)onTrackChange;
@end


/**
  EngageEvent creator for Purchase events
*/
SWIFT_CLASS("_TtC10engageCore20PurchaseEventCreator")
@interface PurchaseEventCreator : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
/**
  Initializes the event creator using specified product id
  \param productId Identifier of the product for which events are created

*/
- (nonnull instancetype)initWithProductId:(NSString * _Nonnull)productId OBJC_DESIGNATED_INITIALIZER;
/**
  Set the title of the product
  \param title Title of the product


  returns:
  PurchaseEventCreator object after updating title of product
*/
- (PurchaseEventCreator * _Nonnull)putProductTitleWithTitle:(NSString * _Nonnull)title;
/**
  Set the price of the product
  \param price Price of the product


  returns:
  PurchaseEventCreator object after updating price of product
*/
- (PurchaseEventCreator * _Nonnull)putProductPriceWithPrice:(NSString * _Nonnull)price;
/**
  Set the currency of price of the product
  \param currency Currency of price of the product


  returns:
  PurchaseEventCreator object after updating Currency
*/
- (PurchaseEventCreator * _Nonnull)putCurrencyWithCurrency:(NSString * _Nonnull)currency;
/**
  Set the type of the product
  \param type Type of the product


  returns:
  PurchaseEventCreator object after updating productType
*/
- (PurchaseEventCreator * _Nonnull)putProductTypeWithType:(NSString * _Nonnull)type;
/**
  Set the order id of the purchase
  \param orderId Order id of the purchase


  returns:
  PurchaseEventCreator object after updating orderId
*/
- (PurchaseEventCreator * _Nonnull)putOrderIdWithOrderId:(NSString * _Nonnull)orderId;
/**
  Set the payment mode of the purchase
  \param paymentMode Payment mode of the purchase


  returns:
  PurchaseEventCreator object after updating paymentMode
*/
- (PurchaseEventCreator * _Nonnull)putPaymentModeWithPaymentMode:(NSString * _Nonnull)paymentMode;
/**
  Set the type of card used for the purchase
  \param type Type of card used for the purchase


  returns:
  PurchaseEventCreator object after updating CardType
*/
- (PurchaseEventCreator * _Nonnull)putCardTypeWithType:(NSString * _Nonnull)type;
/**
  Set the name of bank used for the purchase
  \param bankName Name of bank used for the purchase


  returns:
  PurchaseEventCreator object after updating bank name
*/
- (PurchaseEventCreator * _Nonnull)putBankNameWithBankName:(NSString * _Nonnull)bankName;
/**
  Set the transaction id of payment
  \param id Transaction id of payment


  returns:
  PurchaseEventCreator object after updating storeName
*/
- (PurchaseEventCreator * _Nonnull)putTransactionIdWithId:(NSString * _Nonnull)id;
/**
  Set the store name used for payment
  \param storeName Store name used for payment


  returns:
  PurchaseEventCreator object after updating transactionId
*/
- (PurchaseEventCreator * _Nonnull)putStoreNameWithStoreName:(NSString * _Nonnull)storeName;
/**
  Set the promo-code used in the product
  \param promoCode Promo-code used in the product


  returns:
  PurchaseEventCreator object after updating Promo-code
*/
- (PurchaseEventCreator * _Nonnull)putPromoCodeWithPromoCode:(NSString * _Nonnull)promoCode;
/**
  Set the original order id of the purchase
  \param id Order id of the purchase


  returns:
  PurchaseEventCreator object after updating Order Id
*/
- (PurchaseEventCreator * _Nonnull)putOriginalOrderIdWithId:(NSString * _Nonnull)id;
/**
  Set the original transaction id of payment
  \param id Transaction id of payment


  returns:
  PurchaseEventCreator object after updating transactionId
*/
- (PurchaseEventCreator * _Nonnull)putOriginalTransactionIdWithId:(NSString * _Nonnull)id;
/**
  Set the product validity days
  \param validityDays Product validity days


  returns:
  PurchaseEventCreator object after updating validityDays
*/
- (PurchaseEventCreator * _Nonnull)putValidityDaysWithValidityDays:(NSString * _Nonnull)validityDays;
/**
  Set the product validity remaining days
  \param remainingDays Product validity remaining days


  returns:
  PurchaseEventCreator object after updating validity remaining days
*/
- (PurchaseEventCreator * _Nonnull)putRemainingDaysWithRemainingDays:(NSString * _Nonnull)remainingDays;
/**
  Creates EngageEvent representing product selection

  returns:
  EngageEvent representing product selection
*/
- (EngageEvent * _Nonnull)onProductSelected;
/**
  Creates EngageEvent representing product checkout

  returns:
  EngageEvent representing product checkout
*/
- (EngageEvent * _Nonnull)onProductCheckout;
/**
  Creates EngageEvent representing product renewal

  returns:
  EngageEvent representing product renewal
*/
- (EngageEvent * _Nonnull)onProductRenew;
/**
  Creates EngageEvent representing product upgrade

  returns:
  EngageEvent representing product upgrade
*/
- (EngageEvent * _Nonnull)onProductUpgrade;
/**
  Creates EngageEvent representing product checkout success

  returns:
  EngageEvent representing product checkout success
*/
- (EngageEvent * _Nonnull)onProductCheckoutSuccess;
/**
  Creates EngageEvent representing product checkout failure

  returns:
  EngageEvent representing product checkout failure
*/
- (EngageEvent * _Nonnull)onProductCheckoutFailed;
@end


/**
  EngageEvent creator for search events
*/
SWIFT_CLASS("_TtC10engageCore18SearchEventCreator")
@interface SearchEventCreator : NSObject
/**
  Initialize the event creator for search events
*/
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/**
  Creates EngageEvent representing the search event
  \param keyword Search keyword


  returns:
  EngageEvent representing the search event
*/
- (EngageEvent * _Nonnull)onSearchWithKeyword:(NSString * _Nonnull)keyword;
@end


SWIFT_CLASS("_TtC10engageCore6Traits")
@interface Traits : NSObject
/**
  emailID of user
*/
@property (nonatomic, copy) NSString * _Nullable email;
/**
  String representing user network
*/
@property (nonatomic, copy) NSString * _Nullable network;
/**
  String name of user
*/
@property (nonatomic, copy) NSString * _Nullable name;
/**
  String value representing UserID of user.
*/
@property (nonatomic, copy) NSString * _Nullable id;
/**
  A [String : String] dictionary representing custom user prfile informations.
*/
@property (nonatomic, copy) NSDictionary<NSString *, NSString *> * _Nullable customTraits;
@property (nonatomic, copy) NSString * _Nullable phoneNumber;
/**
  To disable default init method.
*/
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


@interface UIDevice (SWIFT_EXTENSION(engageCore))
@end


@interface UIViewController (SWIFT_EXTENSION(engageCore))
@end


@interface NSUserDefaults (SWIFT_EXTENSION(engageCore))
@end


/**
  EngageEvent creator for User events
  Identify should be called prior to logging user events to track latest user attributes.
*/
SWIFT_CLASS("_TtC10engageCore16UserEventCreator")
@interface UserEventCreator : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
/**
  Initializes the event creator for user events
  \param userId userId of user

*/
- (nonnull instancetype)initWithUserId:(NSString * _Nonnull)userId OBJC_DESIGNATED_INITIALIZER;
/**
  Creates EngageEvent representing user sign-up

  returns:
  EngageEvent representing user sign-up
*/
- (EngageEvent * _Nonnull)onUserRegistered;
/**
  Creates EngageEvent representing user login

  returns:
  EngageEvent representing user login
*/
- (EngageEvent * _Nonnull)onUserLogin;
/**
  Creates EngageEvent representing user logout

  returns:
  EngageEvent representing user logout
*/
- (EngageEvent * _Nonnull)onUserLogout;
@end

#pragma clang diagnostic pop
