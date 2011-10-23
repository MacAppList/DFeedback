//-------------------------------------------------------------------------------------------------
// Copyright (c) 2008-2011 DaisyDisk Team: <http://www.daisydiskapp.com>
// Some rights reserved: <http://opensource.org/licenses/mit-license.php>
//-------------------------------------------------------------------------------------------------

#import <Cocoa/Cocoa.h>

//-------------------------------------------------------------------------------------------------
// Extension to NSURLRequest with utilities
//-------------------------------------------------------------------------------------------------
@interface NSURLRequest (Extension)
//-------------------------------------------------------------------------------------------------
// Create request with HTTP POST form
+ (NSURLRequest*)requestWithURL:(NSURL*)url postForm:(NSDictionary*)values;

@end
