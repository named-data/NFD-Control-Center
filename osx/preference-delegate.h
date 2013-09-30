/* -*- Mode: C++; c-file-style: "gnu"; indent-tabs-mode:nil -*- */
/*
 * @copyright See LICENCE for copyright and license information.
 *
 * @author Alexander Afanasyev <alexander.afanasyev@ucla.edu>
 * @author Ilya Moiseenko <iliamo@ucla.edu>
 */

#import <Cocoa/Cocoa.h>

@interface PreferenceDelegate : NSObject
{
  IBOutlet NSWindow *preferencesPanel;
  IBOutlet NSView *generalSettingsView;
  IBOutlet NSView *forwardingSettingsView;
  IBOutlet NSView *securitySettingsView;
  
  IBOutlet NSPanel *prefixRegistrationSheet;
  IBOutlet NSComboBox *tunnelCombobox;
  IBOutlet NSTextField *namePrefixText;
  IBOutlet NSTextField *endpointText;
}

@property BOOL allowSoftwareUpdates;
@property BOOL enableHubDiscovery;

-(IBAction)showPreferencesPanel:(id)sender;
-(IBAction)openGeneralSettings:(id)sender;
-(IBAction)openForwardingSettings:(id)sender;
-(IBAction)openSecuritySettings:(id)sender;

-(IBAction)switchSoftwareUpdates:(id)sender;
-(IBAction)switchHubDiscovery:(id)sender;

-(IBAction)addFibEntry:(id)sender;
-(IBAction)removeFibEntry:(id)sender;
-(IBAction) showFibEntrySheet:(id)sender;
-(IBAction)hideFibEntrySheet:(id)sender;
@end
