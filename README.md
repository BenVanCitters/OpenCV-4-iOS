OpenCV-4-iOS
============

This project owes its existence to the example set forth at - http://docs.opencv.org/doc/tutorials/ios/video_processing/video_processing.html .  Nothing much has been added except the neccessary Xcode project files, so If you run into issues with this project check there as a first resort.

The most simple, bare bones openCV + iOS project.  All it does is Display the OpenCV camera video feed on a ios ViewController. Compatible with iOS7 and built inside Xcode 5.  Uses OpenCV 2.4.8.

This iOS project requires opencv2.framework to compile... 

Easy - Precompiled OSX Opencv2 binaries; download the 'opencv2.framework' file from - http://sourceforge.net/projects/opencvlibrary/files/opencv-ios/ - (as of 10/13/2014)

Hard - Instructions to build opencv2 from scratch - http://docs.opencv.org/doc/tutorials/introduction/ios_install/ios_install.html - (as of 3/4/2014)

Once you have the opencv2.framework, simply drag and drop it into the 'Frameworks' group inside Xcode.
