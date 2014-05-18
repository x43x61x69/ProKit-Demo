//
//  ProAppAppDelegate.m
//  ProKit Demo
//
//  Copyright (c) 2014 Cai, Zhi-Wei. All rights reserved.
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#import "ProAppAppDelegate.h"

@implementation ProAppAppDelegate


- (void)applicationDidFinishLaunching:(NSNotification *)aNotification
{
    // This makes the window snap to the edge automaticly when near a screen edge.
    _window.snapsToEdges = YES;
}

- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(NSApplication *)theApplication
{
    return YES;
}

- (void)demo
{
    _indicator.indeterminate = NO;
    [_indicator startAnimation:nil];
    _indicator.doubleValue = 0;
    timer = [NSTimer scheduledTimerWithTimeInterval: .8
                                             target: self
                                           selector: @selector(handler)
                                           userInfo: nil
                                            repeats: YES];
    [_indicator stopAnimation:nil];
    
}

- (void)handler
{
    if (_indicator.doubleValue < _indicator.maxValue) {
        _indicator.doubleValue += 20;
    } else {
        _indicator.indeterminate = YES;
        [timer invalidate];
        timer = nil;
    }
    
}

- (IBAction)go:(id)sender
{
    [self performSelectorOnMainThread:@selector(demo) withObject:nil waitUntilDone:NO];
}

@end
