//
//  APFViewController.h
//  Frame It
//
//  Created by Flack AP on 4/19/14.
//  Copyright (c) 2014 Andy Flack. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface APFViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (strong, nonatomic) IBOutlet UIImageView *imageView;

- (IBAction)sendPhoto:(UIButton*)sender;

@end
