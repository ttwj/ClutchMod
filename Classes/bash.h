//
//  bash.h
//  Clutch
//
//  Created by Terence Tan on 7/6/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface bash : NSObject {
    NSString* script;
    NSDictionary* env;
}
- (void) run;
@end