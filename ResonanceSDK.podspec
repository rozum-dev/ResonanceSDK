Pod::Spec.new do |s|  
    s.name              = 'ResonanceSDK'
    s.version           = '1.0'
    s.summary           = 'Cool tracking lib'
    s.homepage          = 'http://cretona.com/'

    s.author            = { 'Name' => 'dmytro.rozum@gmail.com' }
    s.license           = { :type => 'Apache-2.0', :file => 'LICENSE' }

    s.platform          = :ios
    s.source            = { :http => 'https://github.com/rozum-dev/ResonanceSDK/blob/master/ResonanceSDK.zip' }

    s.ios.deployment_target = '8.0'
    s.vendored_frameworks = "ResonanceSDK.framework"
    s.dependency "INTULocationManager", "~> 4.2.0"

end  