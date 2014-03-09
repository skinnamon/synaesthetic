//
//  SynAppDelegate.h
//  Synaesthetic
//
//  Created by Nimbus on 3/8/14.
//  Copyright (c) 2014 Nimbus. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface SynAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (IBAction)saveAction:(id)sender;

@end
