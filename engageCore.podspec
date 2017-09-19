Pod::Spec.new do |s|
  s.name = 'engageCore'
  s.version = '1.0.0'
  s.author = 'Diagnal'
  s.license = {:type => 'Commercial' , :file => 'LICENSE'}
  s.homepage = 'https://github.com/diagnal/engage-ios-sdk'
  s.summary = 'The EngageCore iOS SDK for App Personalization and Engagement.'
  s.source = { :git => 'https://github.com/diagnal/engage-ios-sdk.git' , :tag => s.version.to_s }
  s.vendored_frameworks = 'engageCore.framework'
  s.platform     = :ios
  s.requires_arc = true
  s.ios.deployment_target = "8.0"
  s.requires_arc = true
  s.platform     = :ios
  s.dependency "Alamofire", '~> 3.5.0'
  s.dependency "AlamofireObjectMapper"
  s.dependency "SDVersion"
end
