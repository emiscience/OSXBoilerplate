//
// Copyright (c) 2011 Christian Kienle
//
// Based on the default Xcode project template.
//

#import <Cocoa/Cocoa.h>
#import "OSBImageManagerDelegate.h"
#import "OSBImageManager.h"
#import "SVHTTPClient.h"
#import "Pin.h"

@interface OSBAppDelegate : NSObject <NSApplicationDelegate, OSBImageManagerDelegate, NSCollectionViewDelegate, NSControlTextEditingDelegate>

#pragma mark Properties
@property (assign) IBOutlet NSWindow *window;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, strong) IBOutlet NSArrayController * arrayController;
@property (weak) IBOutlet NSProgressIndicator *progressIndicator;

#pragma mark Actions
- (IBAction)saveAction:(id)sender;
- (IBAction)detailAction:(id)sender;
- (IBAction)refresh:(id)sender;
@end
