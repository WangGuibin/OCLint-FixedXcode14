# Uncomment the next line to define a global platform for your project
 platform :ios, '11.0'

target 'OCLintDemo' do
  # Comment the next line if you don't want to use dynamic frameworks
  #use_frameworks!

  # Pods for OCLintDemo
  pod 'YYModel'

end

post_install do |pi|
    pi.pods_project.targets.each do |t|
        t.build_configurations.each do |config|
            config.build_settings['COMPILER_INDEX_STORE_ENABLE'] = "NO"
        end
    end
end
