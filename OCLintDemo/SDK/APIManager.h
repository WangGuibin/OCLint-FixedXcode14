//
//  APIManager.h
//  OCLintDemo
//
//  Created by 王贵彬 on 2023/6/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface APIManager : NSObject

+ (void)getDataFromURLString:(NSString *)urlStr
                    callback:(void(^)(NSString *json))callBack;

+ (void)postDataFromURLString:(NSString *)urlStr
                     bodyDict:(NSDictionary *)paramsDic
                     callback:(void(^)(id obj))callBack;


@end

NS_ASSUME_NONNULL_END
