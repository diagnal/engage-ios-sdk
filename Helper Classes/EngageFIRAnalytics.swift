//
//  EngageFIRAnalytics.swift
//  engage-ios-sdk
//
//  Created by Sudeep George on 04/08/17.
//  Copyright © 2017 Diagnal. All rights reserved.
//

import UIKit
import FirebaseAnalytics
import engageCore

class EngageFIRAnalytics: NSObject {
    
    /// Logs an app event.
    class func logEventWithName (name : String , parameters : [String : AnyObject]?) {
        Analytics.logEvent(name, parameters: parameters)
        if parameters != nil {
            Engage.track(eventName: name, params: parameters!)
        }
    }
    
    /// Sets a user property to a given value. Up to 25 user property names are supported. Once set,
    /// user property values persist throughout the app lifecycle and across sessions.
    
    class func setUserPropertyString(value : String , forName name : String) {
        Analytics.setUserProperty(value, forName: name)
    }
    
    /// Sets the user ID property.
    class func setUserID(userID : String?) {
        Analytics.setUserID(userID)
    }
    
    /// Sets the current screen name, which specifies the current visual context in your app. This helps
    /// identify the areas in your app where users spend their time and how they interact with your app.
    
    class func setScreenName(screenName : String? , screenClass screenClassOverride:String?) {
        Analytics.setScreenName(screenName, screenClass: screenClassOverride)
    }
    
    /// The unique ID for this instance of the application.
    class func appInstanceID() -> String {
        return Analytics.appInstanceID()
    }
    
    /// Handles events related to a URL session that are waiting to be processed.
    class func handleEventsForBackgroundURLSession(identifier : String , completionHandler : @escaping ((Void) -> Void)) {
        Analytics.handleEvents(forBackgroundURLSession: identifier, completionHandler: completionHandler)
    }
    
    /// Handles the event when the app is launched by a URL.
    class func handleOpenURL(url : URL) {
        Analytics.handleOpen(url)
    }
    
    /**
     * Handles the event when the app receives data associated with user activity that includes a
     * Universal Link (on iOS 9.0 and above).
     */
    class func handleUserActivity(userActivity : Any) {
        Analytics.handleUserActivity(userActivity)
    }
}
