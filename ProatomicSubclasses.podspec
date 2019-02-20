#
# Be sure to run `pod lib lint ProatomicSubclasses.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'ProatomicSubclasses'
  s.version          = '0.2.7'
  s.summary          = 'A lot of ProatomicSubclasses.'
  s.description      = "Proatomic subclasses for iOS."
  s.homepage         = 'http://proatomicdev.com'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'Copyright', :text => 'Copyright 2016 Proatomic' }
  s.author           = { 'Guillermo Saenz' => 'gsaenz@proatomicdev.com' }
s.source           = { :git => 'https://github.com/ProAtomic/ProatomicSubclasses.git', :tag => s.version.to_s }
  s.ios.deployment_target = '8.0'
  s.default_subspecs= [
'Core'
  ]

  s.subspec 'Core' do |ss|
    ss.vendored_frameworks = [ 'ProatomicSubclasses/Frameworks/ProatomicSubclasses-Release-iphoneuniversal/ProatomicSubclasses.framework' ]
  end
end
