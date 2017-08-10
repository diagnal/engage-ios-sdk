 [![N|Solid](http://i.imgur.com/iz9YsTS.png)](https://diagnal.com)
# Engage iOS SDK #
Engage is real-time targeted marketing campaigns that drive user acquisition and conversion.
It promotes content to users and access customer sentiment.

Engage iOS SDK allows easy integration of Engage to your iOS application in a few steps.
Engage iOS SDK requires iOS 8.0 or higher.
Engage iOS SDK now support swift 2.3 only.

## Getting Started
### Step 1: Install the Framework
There are two ways to import the Engage iOS SDK for iOS into your project:
CocoaPods
Dynamic Frameworks

You should use one of these two ways to import the Engage iOS SDK but not multiple. Importing the SDK in multiple ways loads duplicate copies of the SDK into the project and causes compiler errors.

#### CocoaPods

1. The Engage iOS SDK for iOS is available through [CocoaPods](http://cocoapods.org). If you have not installed CocoaPods, install CocoaPods by running the command:

$ gem install cocoapods
$ pod setup

Depending on your system settings, you may have to use `sudo` for installing `cocoapods` as follows:

$ sudo gem install cocoapods
$ pod setup

2. In your project directory (the directory where your `*.xcodeproj` file is), create a plain text file named `Podfile` (without any file extension) and add the lines below. Replace `YourTarget` with your actual target name.

source 'https://github.com/CocoaPods/Specs.git'

platform :ios, '8.0'
use_frameworks!

target :'YourTarget' do
pod 'engageCore'
end

1. Then run the following command:

$ pod install

1. Open up `*.xcworkspace` with Xcode and start using the SDK.

### Step 2:  Initialize the Client
The entry point of the SDK is through the `Engage` class. We recommend initializing the client in the `application(_:didFinishLaunchingWithOptions:)
` your `UIApplicationDelegate` implementation class .
```swift
Engage.initialize(application,didFinishLaunchingWithOptions: launchOptions, clientId: "ENGAGE_CLIENT_ID", projectId: "ENGAGE_PROJECT_ID", partitionKey: "ENGAGE_PARTITIONKEY")
```
`ENGAGE_CLIENT_ID`, `ENGAGE_PROJECT_ID` and `ENGAGE_PARTITIONKEY` can be obtained from your [Enage Dashboard](http://engage.diagnal.com )

## Usage
### Identify User

The `identify` method is how you associate your users and their actions to a recognizable `userId` and `Traits`.
Every arguments in the Trait `init` method are optionals.

```swift
let trait = Traits(age: age,
gender: genderValue,
country: country,
city: city,
network: network,
name: fullName,
status: registrationStatus,
id: userId,
customTraits: customTraits)
Engage.identify(trait)

```
If `Traits` is initialized without `userId`, user will be treated as anonymous.

Example `identify` call:

```swift
let traits = Traits(age: 28,
gender: GENDER.MALE,
country: "India",
name: "Sudeep",
status: "subscribed",
id: "4981498")                      
Engage.identify(traits)
```

### Track

The `track` method lets you record any actions your users perform. You can see a track example in the guide or find details on the track method payload.

```javascript
Engage.track("eventName", params: params)
```

The `track`  method has the following parameters:

| Parameter                 | Type                    | Description
| ------------------------- | ----------------------- | -------------
| `eventName`               | String             	  | The name of the event you’re tracking.
| `params`    			|  [NSObject : AnyObject]                  | A dictionary of parameters.

Example `track` call:

```swift
var params = [NSObject : AnyObject]()
params["content_title"] = "How to Create a Tracking Plan"
params["content_id"] = "1234"
Engage.track("play_content", params: params)
```
### Campaigns
Campaigns are triggered by the SDK on events that are defined in the campaign page.
You can register a  `CampaignEventDelegate` to know when a campaign is triggered and obtain an action-string based on user interaction with the campaign.

```swift
Engage.registerForCampaignEvents(campaignEventDelegateImpl)
```

`CampaignEventDelegate` should be implemented by `CampaignEventDelegateImpl` Object.

```swift
func onCampaignTriggered(campaign : EngageCampaign) -> Bool {
///Return false if you don't want to show the campaign dialog
return true
}

func onCampaignAction(campaign : EngageCampaign) {
}
```

## Helper Classes
Helper classes provides an easy way to integrate Engage iOS SDK `Engage.track("eventName", params: params)`  if you are already using an event analytics framework

We currently support FirebaseAnalytics. 

To use helper class please add them to your project. Please find the helper class for Firebaseanalytics [here](http://engage.diagnal.com ).

If you already integrated the FirebaseAnalytics , Just replace the calls that starts with `FIRAnalytics` with `EngageFIRAnalytics`.

Example :
`FIRAnalytics.logEventWithName(name, parameters: parameters)`   with 
`EngageFIRAnalytics.logEventWithName(name, parameters: parameters)`





