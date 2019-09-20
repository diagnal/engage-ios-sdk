 [![N|Solid](http://i.imgur.com/iz9YsTS.png)](https://diagnal.com)
# Engage iOS SDK #
Engage is real-time targeted marketing campaigns that drive user acquisition and conversion.
It promotes content to users and access customer sentiment.

Engage iOS SDK allows easy integration of Engage to your iOS application in a few steps.
Engage iOS SDK requires iOS 8.0 or higher.
Engage iOS SDK now support swift 2.3 and swift 3.

**Swift 2.3 Latest library version : 2.0.0**

**Swift 3.0 Latest library version : 3.0.0**

**Swift 5.0 Latest library version : 3.4.3**

**Support for Xcode 11 Latest library version : 3.4.5**

## Resources
 - [engageCore Docs](https://diagnal-engage.s3.amazonaws.com/engage-ios-sdk-docs/engage-core/Classes/Engage.html)
 - [engageExtensions Docs](https://diagnal-engage.s3.amazonaws.com/engage-ios-sdk-docs/engageCoreServiceExtension-sdk-docs/index.html)

## Getting Started
### Step 1: Install the Framework
There are two ways to import the Engage iOS SDK for iOS into your project:
CocoaPods
Manual
You should use one of these two ways to import the Engage iOS SDK but not multiple. Importing the SDK in multiple ways loads duplicate copies of the SDK into the project and causes compiler errors.

#### CocoaPods
1. The Engage iOS SDK for iOS is available through [CocoaPods](http://cocoapods.org). If you have not installed CocoaPods, install CocoaPods by running the command:

`$ gem install cocoapods`
`$ pod setup`

Depending on your system settings, you may have to use `sudo` for installing `cocoapods` as follows:

	`$ sudo gem install cocoapods`
	`$ pod setup`

2. In your project directory (the directory where your `*.xcodeproj` file is), create a plain text file named `Podfile` (without any file extension) and add the lines below. Replace `YourTarget` with your actual target name.
```swift
source 'https://github.com/CocoaPods/Specs.git'

platform :ios, '8.0'
use_frameworks!

target :'YourTarget' do
pod 'engageCore'
end

```
1. Then run the following command:

`$ pod install`

1. Open up `*.xcworkspace` with Xcode and start using the SDK.

### Step 2:  Initialize the Client
The entry point of the SDK is through the [`Engage`](https://diagnal-engage.s3.amazonaws.com/engage-ios-sdk-docs/engage-core/Classes/Engage.html) class. We recommend initializing the client in the `application(_:didFinishLaunchingWithOptions:)` in your `UIApplicationDelegate` implementation class .
```swift
//Swift 2.3
Engage.initialize(application,didFinishLaunchingWithOptions: launchOptions, accountId: "ENGAGE_ACCOUNT_ID", projectId: "ENGAGE_PROJECT_ID")

//Swift 3.0
Engage.initialize(application: application,
didFinishLaunchingWithOptions:launchOptions,
accountId: "ENGAGE_ACCOUNT_ID",
projectId: "ENGAGE_PROJECT_ID")
```
`ENGAGE_ACCOUNT_ID` and  `ENGAGE_PROJECT_ID`  can be obtained from your [Enage Dashboard](http://engage.diagnal.com )

## Usage
### Identify User

The `identify` method is how you associate your users and their actions to a recognizable `userId` and [`Traits`](https://diagnal-engage.s3.amazonaws.com/engage-ios-sdk-docs/engage-core/Classes/Traits.html).
Every arguments in the Trait `init` method are optionals.

```swift
let traits = Traits(id: userId,
                    name: fullName,
                    email: email,
                    gender: genderValue,
                    age: age,
                    status: registrationStatus,
                    city: city,
                    country: country,
                    network: network,
                    customTraits: customTraits)
//Swift 2.3
Engage.identify(traits)

//Swift 3.0
Engage.identify(traits: traits)
```
If [`Traits`](https://diagnal-engage.s3.amazonaws.com/engage-ios-sdk-docs/engage-core/Classes/Traits.html) is initialized without `userId`, user will be treated as anonymous.

Example `identify` call:

```swift 
let traits = Traits(id: "4981498",
                    name: "Sudeep",
                    gender: GENDER.MALE,
                    age: 28,
                    status: "subscribed",
                    country: "India")

//Swift 2.3
Engage.identify(traits)

//Swift 3.0
Engage.identify(traits: traits)

```

### Track

The `track` method lets you record any actions your users perform. You can see a track example in the guide or find details on the track method payload.

```swift
//Swift 2.3
Engage.track("eventName", params: params)

//Swift 3.0
Engage.track(eventName: "eventName", params: params)

```

The `track`  method has the following parameters:

| Parameter                 | Type                    | Description
| ------------------------- | ----------------------- | -------------
| `eventName`               | String             	  | The name of the event you’re tracking.
| `params`    			|  [NSObject : AnyObject]                  | A dictionary of parameters.

Example `track` call:

```swift
//Swift 2.3
var params = [NSObject : AnyObject]()
params["content_title"] = "How to Create a Tracking Plan"
params["content_id"] = "1234"
Engage.track("play_content", params: params)

//Swift 3.0
var params = [AnyHashable : Any]()
params["content_title"] = "How to Create a Tracking Plan"
params["content_id"] = "1234"
Engage.track(eventName: "play_content", params: params)
```

#### Using built-in events
Engage iOS SDK pre-built Events gives you the ability to track the specific actions and events in your app that are most commonly used.
For example, the content view event can be logged as follows:
```swift
//Swift 2.3
let eventCreator = ContentEventCreator(contentId: "series_2332")
 eventCreator.putType("series")
			 .putTitle("Game of thrones")
			 .putSource("Details page")
Engage.track(event.onContentView())

//Swift 3.0
let eventCreator = ContentEventCreator.init(contentId: contentID!).putType(type: "Movie").putTitle(title:  "Test Title")
Engage.track(event: event.onContentView())
            
```

Engage iOS SDK support the following event creators: 

| Event Creator                 | Description
| ----------------------------- | --------------------------------
| [`ApplicationEventCreator`](https://diagnal-engage.s3.amazonaws.com/engage-ios-sdk-docs/engage-core/Classes/ApplicationEventCreator.html) 	|Event creator for Application Events events
| [`AdvertisementEventCreator`](https://diagnal-engage.s3.amazonaws.com/engage-ios-sdk-docs/engage-core/Classes/AdvertisementEventCreator.html) 	|Event creator for Advertisement playback events
| [`ContentEventCreator`](https://diagnal-engage.s3.amazonaws.com/engage-ios-sdk-docs/engage-core/Classes/ContentEventCreator.html) 		|Event creator for Media Content events
|[`DownloadEventCreator`](https://diagnal-engage.s3.amazonaws.com/engage-ios-sdk-docs/engage-core/Classes/DownloadEventCreator.html) 		|Event creator for Content Download events
| [`PlayerEventCreator`](https://diagnal-engage.s3.amazonaws.com/engage-ios-sdk-docs/engage-core/Classes/PlayerEventCreator.html) 			|Event creator for Media Playback events
| [`PurchaseEventCreator`](https://diagnal-engage.s3.amazonaws.com/engage-ios-sdk-docs/engage-core/Classes/PurchaseEventCreator.html) 		|Event creator for Purchase events
| [`SearchEventCreator`](https://diagnal-engage.s3.amazonaws.com/engage-ios-sdk-docs/engage-core/Classes/SearchEventCreator.html) 			|Event creator for Search events
| [`UserEventCreator`](https://diagnal-engage.s3.amazonaws.com/engage-ios-sdk-docs/engage-core/Classes/UserEventCreator.html) 			|Event creator for User events

**Note**: In order to track AppLaunch events , you should call the  `ApplicationEventCreator` `onAppLaunch()` event from the `application(_:didFinishLaunchingWithOptions:)` inside the `UIApplicationDelegate` implementation class .

```swift
//Swift 2.3
Engage.track(ApplicationEventCreator().onAppLaunch())

//Swift 3.0
Engage.track(event: ApplicationEventCreator().onAppLaunch())

```

### Campaigns
Campaigns are triggered by the SDK on events that are defined in the campaign page.
You can register a  `CampaignEventDelegate` to know when a campaign is triggered and obtain an action-string based on user interaction with the campaign.

```swift
//Swift 2.3
Engage.registerForCampaignEvents(campaignEventDelegateImpl)

//Swift 3.0
Engage.registerForCampaignEvents(campaignEventDelegate: self)

```

`CampaignEventDelegate` should be implemented by `CampaignEventDelegateImpl` Object.

```swift
func onCampaignTriggered(campaign : EngageCampaign) -> Bool {
///Return false if you don't want to show the campaign dialog
return true
}

func onCampaignAction(campaign : EngageCampaign) {
//use campaign object properties to perform appropriate actions in your roject
}
```
## Push Notifcations
Engage supports push notification campaigns , a very powerful way to run targeted campaigns. 
Please follow below steps to configure push notifications. 

### APNS Setup
To make the push notification campaigns work in Engage ,  you need to configure your application for push services.For detailed instructions on this process, please see the [APNS Setup documentation]().

### Register For Notifications

 **Step 1**  : Go to your project target and click on Capabilities and ensure that ‘Push Notifications’ is enabled and that ‘Remote notifications’ is selected under Background Modes.

 **Step 2** :  You need to register for remote notifications from UIApplicationDelegate ```didFinishLaunchingWithOptions``` method.
```swift
//swift2.3
func application(application: UIApplication, didFinishLaunchingWithOptions launchOptions: [NSObject: AnyObject]?) -> Bool {
	let settings: UIUserNotificationSettings = UIUserNotificationSettings(forTypes: [.Alert, .Badge, .Sound], categories: nil)
	application.registerUserNotificationSettings(settings)
	application.registerForRemoteNotifications()
}

//Swift 3.0
func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplicationLaunchOptionsKey: Any]?) -> Bool {
UNUserNotificationCenter.current().requestAuthorization(options: [.alert, .sound, .badge]) {
            (granted, error) in
            if granted {
                application.registerForRemoteNotifications()
            }
        }
}
```
  
**Step 3 : ** If register for push notifications is successful, you will recieve a call back in the UIApplicationDelegate ```didRegisterForRemoteNotificationsWithDeviceToken``` method. Next Step is , You need to register for remote notifications from  Engage using method ```Engage.registerForRemoteNotificationsWithDeviceToken(deviceToken)```
```swift
//Swift 2.3
//Register remote notifications from engage. 
func application(application: UIApplication, 					    didRegisterForRemoteNotificationsWithDeviceToken 
deviceToken: NSData) {
	Engage.registerForRemoteNotificationsWithDeviceToken(deviceToken)
}

//Swift 3.0
func application(_ application: UIApplication, didRegisterForRemoteNotificationsWithDeviceToken deviceToken: Data) {      Engage.registerForRemoteNotificationsWithDeviceToken(deviceToken: deviceToken)
}
```
### Inform Engage SDK Notification received/opened event

Engage uses silent push notifications for push notification campaigns.
In order to make the engage push notification campaign work , you need to  inform Engage SDK about the notification is received/opened event at your end.

You can use  
```swift 
//Swift 2.3
Engage.onNotificationRecieved(userInfo)
//Swift 3.0  
Engage.onNotificationRecieved(userInfo: userInfo)
``` 
and 
```swift 
//Swift 2.3
Engage.onNotificationOpened(userInfo)

//Swift 3.0
Engage.onNotificationRecieved(userInfo: userInfo)
``` 
to inform Engage SDK about notification received/opened. Both these method will be returning a not nil object of [```NotificationData```](https://diagnal-engage.s3.amazonaws.com/engage-ios-sdk-docs/engage-core/Classes/NotificationData.html), if notification received is an engage notification.  If it returns a non nil [NotificationData](https://diagnal-engage.s3.amazonaws.com/engage-ios-sdk-docs/engage-core/Classes/NotificationData.html) object , you can easily skip processing those notifications in your applications.

**Step 1** : Implement ```application(_:didReceiveRemoteNotification:fetchCompletionHandler:)``` method  in UIApplicationDelegate.

First you need to identify whether the the ```didReceiveRemoteNotification``` is invoked because user taps on  a push notification or because user receives a push notification.You can Identify this using the application state.
```swift 
switch application.applicationState {
    case .active:
        //app is currently active, iOS won't be showing any notifications in this case. Applications needs to perform operations based on the user notifications.
        break
    case .inactive:
        //app is transitioning from background to foreground (user taps notification), do what you need when user taps here
        break
    case .background:
        //app is in background, and notification is just received when app is in background.Perform any background fetches if needed.
         break
}
```

```swift 
//Swift 2.3
// Example
func application(application: UIApplication, didReceiveRemoteNotification userInfo: [NSObject : AnyObject], fetchCompletionHandler completionHandler: (UIBackgroundFetchResult) -> Void) {
if(application.applicationState == .Inactive ) {
//User has interacted with a received notification. Inform Engage SDK a notification is opened
	if let notificationData = Engage.onNotificationOpened(userInfo) {
	 // Application can use the NotificationData object to perform any custom navigations , deep links etc.
	}
} 
else if (application.applicationState == .Background) {
//Inform Engage SDK that an event has been recieved.
  let notificationData = Engage.onNotificationRecieved(userInfo)
	}
else {
/*
Application is in Active State/ Foreground.
Inform Engage SDK that an event has been recieved.
Also ,since iOS won't be displaying a notification since application is already in foreground , application Developer can use the NotificationData object to show some custom inapp notifications or custom UI. if you are planning to show some custom UI / Inapp notifications , the you need to inform engage SDK if the user is interacted with that UI.

For iOS 10 and above you could use UNUserNotificationCenterDelegate to control whether you need to show the notification when application is in foreground.
*/
	let notificationData = Engage.onNotificationRecieved(userInfo)
	}
completionHandler(.NewData)
}

//Swift 3.0
func application(_ application: UIApplication,didReceiveRemoteNotification userInfo: [AnyHashable : Any],fetchCompletionHandler completionHandler: @escaping (UIBackgroundFetchResult) -> Void) {
        if(application.applicationState == .inactive ) {
            //User has interacted with a received notification. Inform Engage SDK a notification is opened
            if let notificationData = Engage.onNotificationOpened(userInfo: userInfo) {
                // Application can use the NotificationData object to perform any custom navigations , deep links etc.
            }
        }
        else if (application.applicationState == .background) {
            //Inform Engage SDK that an event has been recieved.
            let notificationData = Engage.onNotificationRecieved(userInfo: userInfo)
        }
        else {
            /*
             Application is in Active State/ Foreground.
             Inform Engage SDK that an event has been recieved.
             Also ,since iOS won't be displaying a notification since application is already in foreground , application Developer can use the NotificationData object to show some custom inapp notifications or custom UI. if you are planning to show some custom UI / Inapp notifications , the you need to inform engage SDK if the user is interacted with that UI.
             
             For iOS 10 and above you could use UNUserNotificationCenterDelegate to control whether you need to show the notification when application is in foreground.
             */
            let notificationData = Engage.onNotificationRecieved(userInfo: userInfo)
        }
        completionHandler(.newData)
    }
```

## Rich Push Notification Campaigns (iOS 10 and above)

### Integration (Add Notification Service Extension)

**Step 1** : Go to AppDelegate.swift and import UserNotification.framework in appdelegate and add this code in didFinishLaunchingWithOptions:

```swift 
UNUserNotificationCenter.currentNotificationCenter().delegate = self
```

**Step 2** : You can enable Rich Push Notification via Notification Service Extension
Create a Notification Service Extension in your project. To do that, in Xcode, select File -> New -> Target and choose the Notification Service Extension template. 

**Step 3** : Once you’ve added the Notification Service Extension target, you can now install ```engageCoreServiceExtension``` from pod to your Notification Extension Target.

Your final pod file will looks like below :
```swift
source 'https://github.com/CocoaPods/Specs.git'

platform :ios, '8.0'
use_frameworks!

target :'YourTarget' do
pod 'engageCore'
end

target "Your Notification Extension" do
    inherit! :search_paths 
    pod 'engageCoreServiceExtension'
end

```
Then run the following command:

`$ pod install`

Open up `*.xcworkspace` with Xcode and start using the SDK.


**Step 4** : Once you’ve added the new target, you’ll have a new file called NotificationService.swift.

Open this class, and extend with EngageNotificationServiceExtension class.
The code in this class looks like this:
```swift 
import UserNotifications
import engageCoreServiceExtension
class NotificationService: EngageNotificationServiceExtension {
}
```

### Inform Engage SDK Notification received/opened event

Step 1: You need to inform Engage SDK that user has opened rich push notification. You can do that by implementing  ```UNUserNotificationCenterDelegate``` ```didReceiveNotificationResponse``` method.

You can validate whether the notification received is from Engage by checking for nil object ```Engage.onNotificationOpened``` returns.
```swift
//Swift 2.3
if let notificationData = Engage.onNotificationOpened(response.notification.request.content.userInfo) {
//Notification from Engage
}

//Swift 3.0
if let notificationData = Engage.onNotificationOpened(userInfo: response.notification.request.content.userInfo) {
//Notification from Engage
}

```

Also application can use ```response.actionIdentifier``` to check whether user interacted by tapping on notification or any interactive buttons.

The  ```UNUserNotificationCenterDelegate``` implementation looks like below : 
```swift 
extension AppDelegate : UNUserNotificationCenterDelegate  {
func userNotificationCenter(center: UNUserNotificationCenter, didReceiveNotificationResponse response: UNNotificationResponse, withCompletionHandler completionHandler: () -> Void) {
/* Called to let your app know which action was selected by the user for a given notification.Invoked when user taps on either notification or any custom interactive buttons in notifications.*/
 if let notificationData = Engage.onNotificationOpened(response.notification.request.content.userInfo) {
 if response.actionIdentifier == UNNotificationDefaultActionIdentifier {
  //User has interacted with the notification.
  }
  else {
  /*User has interacted with the notification interactive buttons.*/
  }
 }
}
    
func userNotificationCenter(center: UNUserNotificationCenter, willPresentNotification notification: UNNotification, withCompletionHandler completionHandler: (UNNotificationPresentationOptions) -> Void) {
/*Called when a notification is delivered to a foreground app.
Call completion handler if you want to display the notification even if the user is in foreground.*/ 
 completionHandler([.Alert])
}  
} 

//Swift 3.0

extension AppDelegate : UNUserNotificationCenterDelegate {
func userNotificationCenter(_ center: UNUserNotificationCenter, didReceive response: UNNotificationResponse, withCompletionHandler completionHandler: @escaping () -> Void){
/* Called to let your app know which action was selected by the user for a given notification.Invoked when user taps on either notification or any custom interactive buttons in notifications.*/
 if let notificationData = Engage.onNotificationOpened(userInfo: response.notification.request.content.userInfo) {
 if response.actionIdentifier == UNNotificationDefaultActionIdentifier {
  //User has interacted with the notification.
  }
  else {
  /*User has interacted with the notification interactive buttons.*/
  }
 }
}
    
func userNotificationCenter(_ center: UNUserNotificationCenter,
willPresent notification: UNNotification, withCompletionHandler completionHandler: @escaping (UNNotificationPresentationOptions) -> Void) {
/*Called when a notification is delivered to a foreground app.
Call completion handler if you want to display the notification even if the user is in foreground.*/ 
    completionHandler(.alert)
}  
}

```
### ShutDown User
If a user logouts from your application , you need to inform the Engage SDK to stop tracking events as current user.

Inorder to stop tracking current user you need to call ```Engage.shutDown()```

After you call shutdown , all the event tracking will be disable by EngageSDK till you call the identify again.
When a new user logins OR if you want to track anonymous users ,  you need to call ```Engage.identify(traits)``` again.

### Support for UNNotificationContentExtension 
If you want to customise the UI of rich push notification ,  you are allowed to do that by integrating UNNotificationContentExtension in your applications.

To invoke UNNotificationContentExtension when engage push notification fires , you need to add UNNotificationExtensionCategory in the info.plist of  UNNotificationContentExtension. 

```UNNotificationExtensionCategory```  used by EngageSDK for all rich push notifications is ```engage.notifications```

For more details regarding UNNotificationContentExtension please refer [apple documentation](https://developer.apple.com/documentation/usernotificationsui/unnotificationcontentextension)
## Helper Classes
Helper classes provides an easy way to integrate Engage iOS SDK `Engage.track("eventName", params: params)`  if you are already using an event analytics framework

We currently support FirebaseAnalytics. 

To use helper class please add them to your project. Please find the helper class for Firebaseanalytics [here](https://github.com/diagnal/engage-ios-sdk/tree/master/Helper%20Classes ).

If you already integrated the FirebaseAnalytics , Just replace the calls that starts with `FIRAnalytics` with `EngageFIRAnalytics`.

Example :

Replace
```swift 
//Swift 2.3
FIRAnalytics.logEventWithName(name, parameters: parameters)

//Swift 3.0
Analytics.logEvent(name, parameters: parameters)
```
  with 
```swift 
//Swift 2.3
EngageFIRAnalytics.logEventWithName(name, parameters: parameters)

//Swift 3.0
EngageFIRAnalytics.logEventWithName(name: name, parameters: parameters)
```

