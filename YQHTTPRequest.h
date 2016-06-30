//
//  YQHTTPRequest.h
//  YQHTTPRequest
//
//  Created by Cuiyongqin on 16/6/30.
//  Copyright © 2016年 Cuiyongqin. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^successBlock)(id obj,NSURLResponse *response) ;
typedef void(^falseBlock)(NSError *error) ;

@interface YQHTTPRequest : NSObject
+ (instancetype)sharedGETReuest;
- (void)MethodRequestWithURLString:(NSString *)urlString andHTTPMethod:(NSString *)HTTPMethod andDict:(NSDictionary *)parameter andSuccessBlock:(successBlock)successblock andFalseBlock:(falseBlock)falseblock;
@end
