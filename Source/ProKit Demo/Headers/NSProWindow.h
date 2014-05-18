//
//  NSProWindow.h
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

#import <Cocoa/Cocoa.h>

@interface NSProWindow : NSWindow
{
    void *_reserved1;
    void *_reserved2;
    void *_reserved3;
}

+ (Class)customWindowTheme;
+ (Class)frameViewClassForStyleMask:(unsigned long long)arg1;
+ (void)initialize;
+ (void)initializeIfHUD:(id)arg1;
+ (void)installCustomWindowTheme:(Class)arg1;
+ (BOOL)isBorderlessStyle:(unsigned long long)arg1;
+ (BOOL)isHUDStyle:(unsigned long long)arg1;
+ (BOOL)isTexturedStyle:(unsigned long long)arg1;
- (id)HUDMenu;
- (id)_compositedBackground;
- (BOOL)_hasDarkShadow;
- (BOOL)_isDarkWindow;
- (void)_proAutomateLiveResize;
- (BOOL)_processKeyboardUIKey:(id)arg1;
- (void)_reallyDoOrderWindow:(long long)arg1 relativeTo:(long long)arg2 findKey:(BOOL)arg3 forCounter:(BOOL)arg4 force:(BOOL)arg5 isModal:(BOOL)arg6;
- (void)_resetFirstResponder;
- (void)_setFirstResponder:(id)arg1;
- (void)_setVisible:(BOOL)arg1;
- (BOOL)_useMetalPattern;
- (void)_validSize:(struct CGSize *)arg1 force:(BOOL)arg2;
- (id)contentSeparatorColor;
- (id)customFieldEditor;
- (void)doCommandBySelector:(SEL)arg1;
- (id)fieldEditor:(BOOL)arg1 forObject:(id)arg2;
- (BOOL)hasLargeMetricsMask;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;
- (void)orderWindow:(long long)arg1 relativeTo:(long long)arg2;
- (struct CGRect)resizeCornerRect;
- (void)sendEvent:(id)arg1;
- (void)setCustomFieldEditor:(id)arg1;
- (void)setHUDMenu:(id)arg1;
- (void)setSnapGravity:(double)arg1;
- (void)setSnapsToEdges:(BOOL)arg1;
- (unsigned long long)sheetBehavior;
- (double)snapGravity;
- (BOOL)snapsToEdges;
- (id)standardWindowButton:(unsigned long long)arg1;
- (BOOL)trackWithEvent:(id)arg1;

@end

