//
//  AppUntils.h
//  Hello
//
//  Created by FansX on 2018/2/1.
//  Copyright © 2018年 AXtech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AppUtils : NSObject
+(void)saveUUIDToKeyChain;
+(NSString *)readUUIDFromKeyChain;
+ (NSString *)getUUIDString;
@end
