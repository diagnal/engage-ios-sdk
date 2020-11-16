Pod::Spec.new do |s|
  s.name = 'engageCore'
  s.version = '3.5.7'
  s.author = 'Diagnal'
  s.license = {:type => 'Commercial' , :file => 'LICENSE'}
  s.homepage = 'https://github.com/diagnal/engage-ios-sdk'
  s.summary = 'The EngageCore iOS SDK for App Personalization and Engagement.'
  s.source = { :git => 'https://github.com/diagnal/engage-ios-sdk.git' , branch: 'xcode_all_version_support' , :tag => s.version.to_s }
  s.ios.vendored_frameworks = 'engageCore.framework'
  s.platform     = :ios, '9.0'
  s.requires_arc = true
  s.dependency "Alamofire",'~> 4.9.0'
  s.dependency "AlamofireObjectMapper"
  s.dependency "SDVersion"
s.pod_target_xcconfig = {
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
end
