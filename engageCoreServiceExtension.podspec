Pod::Spec.new do |s|
    s.name = 'engageCoreServiceExtension'
    s.version = '3.5.5'
    s.summary = 'Engage App Extensions'
    s.homepage = 'https://github.com/diagnal/engage-ios-sdk'
    s.license = {:type => 'Commercial' , :file => 'LICENSE'}
    s.author = 'Diagnal'
    s.source = { :git => 'https://github.com/diagnal/engage-ios-sdk.git' ,branch: 'bi_integration_vdt_v2' , :tag => s.version.to_s }
    s.ios.vendored_frameworks = 'engageCoreServiceExtension.framework'
    s.platform     = :ios, '10.0'
    s.requires_arc = true
s.pod_target_xcconfig = {
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
end