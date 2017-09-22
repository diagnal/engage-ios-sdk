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
        FIRAnalytics.logEventWithName(name, parameters: parameters)
        if parameters != nil {
            Engage.track(name, params: parameters!)
        }
    }
    
    /// Sets a user property to a given value. Up to 25 user property names are supported. Once set,
    /// user property values persist throughout the app lifecycle and across sessions.
    
    class func setUserPropertyString(value : String , forName name : String) {
        FIRAnalytics.setUserPropertyString(value, forName: name)
    }
    
    /// Sets the user ID property.
    class func setUserID(userID : String?) {
        FIRAnalytics.setUserID(userID)
    }
    
    /// Sets the current screen name, which specifies the current visual context in your app. This helps
    /// identify the areas in your app where users spend their time and how they interact with your app.
    
    class func setScreenName(screenName : String? , screenClass screenClassOverride:String?) {
        FIRAnalytics.setScreenName(screenName, screenClass: screenClassOverride)
    }
    
    /// The unique ID for this instance of the application.
    class func appInstanceID() -> String {
        return FIRAnalytics.appInstanceID()
    }
    
    /// Handles events related to a URL session that are waiting to be processed.
    class func handleEventsForBackgroundURLSession(identifier : String , completionHandler : ((Void) -> Void)) {
        FIRAnalytics.handleEventsForBackgroundURLSession(identifier, completionHandler: completionHandler)
    }
    
    /// Handles the event when the app is launched by a URL.
    class func handleOpenURL(url : NSURL) {
        FIRAnalytics.handleOpenURL(url)
    }
    
    /**
     * Handles the event when the app receives data associated with user activity that includes a
     * Universal Link (on iOS 9.0 and above).
     */
    class func handleUserActivity(userActivity : AnyObject) {
        FIRAnalytics.handleUserActivity(userActivity)
    }
}
