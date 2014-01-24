//
//  ViewController.h
//  OpenCVTest
//
//  Created by Video Edit Mobile on 1/23/14.
//  Copyright (c) 2014 Video Edit Mobile. All rights reserved.
//
#import <opencv2/highgui/cap_ios.h>
#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<CvVideoCameraDelegate>
{
    IBOutlet UIImageView* imageView;
    IBOutlet UIButton* button;
    CvVideoCamera* videoCamera;
}

- (IBAction)actionStart:(id)sender;

@property (nonatomic, retain) CvVideoCamera* videoCamera;
@end
