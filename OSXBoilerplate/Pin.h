//
//  Pin.h
//  OSXBoilerplate
//
//  Created by Truman, Christopher on 3/28/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Pin : NSManagedObject

@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSString * imageURL;
@property (nonatomic, retain) id image;

@end
