//
//  PBSearchManager.h
//  OSXBoilerplate
//
//  Created by Truman, Christopher on 3/28/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PBSearchManager : NSObject

@property (nonatomic, strong) IBOutlet NSMutableArray * recentSearches;

-(void)addSearchQuery:(NSString*)queryString;
@end
