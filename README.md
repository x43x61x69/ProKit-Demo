ProKit Demo
===========

A demostration of using Apple's ProKit.framework, a "Pro" and internal version of Apple's AppKit used in Apple Pro Apps.

[Project Repo](https://github.com/x43x61x69/ProKit-Demo)

Description
-----------

*The source code served as an example, it is, by no means, a commercial grade product. It might contain errors or flaws, and it was created for demonstration purpose only.*

**ProKit Demo** gives you a simple demonstration of using Apple's private framework "**ProKit**", which is a customized version of AppKit that used in Apple's Pro Apps. (**Aperture**, **iPhoto**, **iMovie**, **Final Cut Pro**, etc.) It has all kinds of `NSObject` subclasses, called `NSProObject`. (e.g. `NSProWindow`)

This project links the framework from your `/System/Library/PrivateFrameworks`, which is labeled version 7.4 as for 10.9.3. However, there's a newer version (8.0+) provided in all MAS version of Apple Pro Apps. You can link the newer version instead to get better result.

Apple has removed the built-in `ProKit.framework` from macOS. You'll have to copy it from an Apple Pro App to compile.

By default, this demo project show you the following ***Pro UI Controls***:

* `NSProButton`
* `NSProColorPicker`
* `NSProComboBox`
* `NSProDateSelector`
* `NSProDrawer`
* `NSProImageView`
* `NSProLabel`
* `NSProMenu`
* `NSProPanel`
* `NSProProgressIndicator`
* `NSProSlider`
* `NSProTabView`
* `NSProTextField`
* `NSProView`
* `NSProWindow`

For legal reasons, this project can't and does not provide a copy of `ProKit.framework` with the source.

Q & A
-----

**Q: Can I use this framework in my project?**

**A:** *NO*. ProKit is a close source framework, which is copyright by Apple Inc. Providing a copy of this framework with your project is illegal without Apple's permission.

**Q: What is that `NSProApplicationMain` within the `main.m`?**

**A:** This will tell the system that it's a Pro App. It will then override user's appearance selection to graphite. In some older version of OS X, this is required to use those Pro UI control subclasses.

Changelog
---------

**v0.1:**

* Initial release.

License
-------

Copyright (C) 2014  Cai, Zhi-Wei.

This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.
