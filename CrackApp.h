//
//  CrackApp.h
//  Clutch
//
//  Created by Terence Tan on 7/6/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>



@interface CrackApp : NSObject {
    int overdrive_enabled;
    NSString *ipapath;
    NSDictionary *applicationDetails;
    BOOL cracked;
    
    NSString *application_basedir;
    NSString *workingDir;
    
}

- (NSString*) crack_application: (NSString*)application_basedir: (NSString*) basename;
- (NSString*) init_crack_binary: (NSString*)application_basedir NSString *bdir, NSString *workingDir, NSDictionary *infoplist);
NSString * crack_binary(NSString *binaryPath, NSString *finalPath, NSString **error);
NSString * genRandStringLength(int len);
@end