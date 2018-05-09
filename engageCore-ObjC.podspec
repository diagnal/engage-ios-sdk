Pod::Spec.new do |s|
  s.name = 'engageCore-ObjC'
  s.version = '1.0.1'
  s.author = 'Diagnal'
  s.license = {:type => 'Commercial' , :file => 'LICENSE'}
  s.homepage = 'https://github.com/diagnal/engage-ios-sdk'
  s.summary = 'The EngageCore iOS SDK for App Personalization and Engagement.'
  s.source = { :git => 'https://github.com/diagnal/engage-ios-sdk.git' , branch: 'ObjectCSupportedVersion' , :tag => s.version.to_s }
  s.ios.vendored_frameworks = 'engageCore.framework'
  s.platform     = :ios, '8.0'
  s.requires_arc = true
  s.dependency "Alamofire", '~> 4.5.0'
  s.dependency "AlamofireObjectMapper"
  s.dependency "SDVersion"
end