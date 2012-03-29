//
//  PBSearchManager.m
//  OSXBoilerplate
//
//  Created by Truman, Christopher on 3/28/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "PBSearchManager.h"

@implementation PBSearchManager

@synthesize recentSearches;

-(id)init{
  if (self = [super init]) {
    self.recentSearches = [NSMutableArray array];
  }
  return self;
}

-(void)addSearchQuery:(NSString*)queryString{
  for (NSString * string in recentSearches) {
    if ([string isEqualToString:queryString]) {
      return;
    }
  }
  [recentSearches addObject:queryString];
}

@end
