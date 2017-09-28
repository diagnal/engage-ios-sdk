Pod::Spec.new do |s|
    s.name = 'engageCoreServiceExtension'
    s.version = '2.0.0'
    s.summary = 'Engage App Extensions'
    s.homepage = 'https://github.com/diagnal/engage-ios-sdk'
    s.license = {:type => 'Commercial' , :file => 'LICENSE'}
    s.author = 'Diagnal'
    s.source = { :git => 'https://github.com/diagnal/engage-ios-sdk.git' ,branch: 'swift_2.3' , :tag => s.version.to_s }
    s.ios.vendored_frameworks = 'engageCoreServiceExtension.framework'
    s.platform     = :ios, '10.0'
    s.requires_arc = true
end