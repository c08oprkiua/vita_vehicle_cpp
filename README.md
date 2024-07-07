# VitaVehicle++
This repository contains a C++ engine module port of VitaVehicle, which is largely based on my [modified fork of VitaVehicle for Godot 4](https://github.com/c08oprkiua/g-rcp2/tree/godot-4.0.3-conversion). This port in particular targets Godot 3, but the manual tweaks needed to make it work for Godot 4 should be minimal (changing `#include` paths, changing base class names where necessary, stuff like that).

# Usage
To add this to Godot, clone this repository, name the root folder `vita_vehicle`, and then copy it into the `modules` folder of your Godot repo and then compile.

# Sidenotes
* Docs have not been added
* It may be buggy, as it inherits all my changes in my fork plus some necessary changes in porting to C++.
* Some export variables have been renamed, as I took it as a chance to clean up the consistency in naming schemes.
* Some features that I wanted to add to the aforementioned Godot 4 fork of VitaVehicle have been included here.

# Credits
* Jreo: Original GDScript-based version of VitaVehicle/g-rcp2
* c08oprkiua: VitaVehicle rewrite, C++ port