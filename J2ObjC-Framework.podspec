Pod::Spec.new do |s|
  s.name         		= "J2ObjC-Framework"
  s.version      		= '2.0.3.2'
  s.summary      		= "Frameworked version of J2ObjC"
  s.homepage        = "https://github.com/HoneyLuka/J2ObjC-Framework"
  s.license         = { :type => 'MIT', :file => 'LICENSE' }
  s.author          = { 'Luka' => 'luka@honeyluka.com' }
  s.source          = { :git => "https://github.com/HoneyLuka/J2ObjC-Framework.git", :tag => s.version.to_s }

  s.platform     		= :ios, "8.0"
  s.requires_arc 		= true

  s.frameworks      = 'Security'
  s.libraries       = 'icucore', 'z'

  s.prepare_command = <<-CMD
      Scripts/download.sh
  CMD

  s.preserve_paths = ['Frameworks/j2objc.framework', 'Distributive', 'install.sh']
  s.xcconfig = { 'FRAMEWORK_SEARCH_PATHS' => '"$(PODS_ROOT)/J2ObjC-Framework/Frameworks"' }  
  
end
