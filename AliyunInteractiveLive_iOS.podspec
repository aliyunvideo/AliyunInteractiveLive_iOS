Pod::Spec.new do |s|

  s.name         = "AliyunInteractiveLive"
  s.version      = "1.2.0"
  s.summary      = "AliyunInteractiveLive_iOS"
  s.description  = <<-DESC
                   It's an SDK for aliyun interactive live, which implement by Objective-C.
                   DESC
  s.homepage     = "https://github.com/aliyunvideo/AliyunInteractiveLive_iOS.git"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "aliyunvideo" => "videosdk@service.aliyun.com"}
  s.platform     = :ios, "8.0"
  s.source       = { :git => "https://github.com/aliyunvideo/AliyunInteractiveLive_iOS.git", :tag => "#{s.version}" }

  s.subspec 'AliyunInteractiveLive' do |interactive_live_sdk|
  interactive_live_sdk.vendored_frameworks = 'AlivcInteractiveLiveRoomSDK.framework','AlivcInteractiveWidgetSDK.framework','AlivcLiveRoomSDK.framework','AlivcUtilsSDK.framework','AliThirdparty.framework','AliyunPlayerSDK.framework','AlivcLivePusher.framework','AlivcLibRtmp.framework','AlivcLibBeauty.framework','AlivcLibFace.framework'
  interactive_live_sdk.resource = 'AlivcLibFaceResource.bundle','AliyunLanguageSource.bundle'
  end

end
