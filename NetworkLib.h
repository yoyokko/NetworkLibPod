//
//  NetworkLib.h
//  NetworkLib
//
//  Created by Edward Chen on 5/12/16.
//  Copyright © 2016 Edward Chen. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NetworkLib : NSObject

- (void)getGithubReposForUser:(NSString*)user withSuccess:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;

@end