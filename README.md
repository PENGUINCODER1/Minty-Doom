# Minty Doom

Minty Doom aims to stay close to the vanilla game while removing some of the
restrictions that came with it.

Note that the Strife, Heretic, and Hexen ports are *still* the Chocolate Doom versions 
with no direct edits currently. They will be removed as soon as I figure
out how to properly remove it.

New features that Minty Doom brings:
* Fixes to IDCLEV and IDCHOPPERS
* "Sky Never Changes" fix
* IDCLIP Doom 2 restriction removal
* The ability to switch to the fist while having a chainsaw
* The WEAP cheat
   * Not identical to most other ports
* The MDBER cheat to see if you have berserk active
* A port of the FHHALL cheat from Doom 95
   * Code from Crispy Doom
* A possible fix for the unused PLAYPALs
* A hopefully more clear IDBEHOLD message
* Fixed the Ouch Face bug

Note that I am an amateur when it comes to this stuff. This is
my first experience with open source projects, Doom source port making,
and the C language as a whole. The repo may be messy and include files
that shouldn't be here.

Also, the only released bin is for win32. Currently you will have to build for your desired system.

Please note that changes made by Minty Doom may or may not break demo compatibility. I deeply suggest
**not** using this port for demo recording or playback.

Minty Doom stays identical to Chocolate Doom otherwise, so it's
README is still below.

## Chocolate Doom's README

More information about the philosophy and design behind Chocolate Doom
can be found in the PHILOSOPHY file distributed with the source code.

## Setting up gameplay

For instructions on how to set up Chocolate Doom for play, see the
INSTALL file.

## Configuration File

Chocolate Doom is compatible with the DOS Doom configuration file
(normally named `default.cfg`). Existing configuration files for DOS
Doom should therefore simply work out of the box. However, Chocolate
Doom also provides some extra settings. These are stored in a
separate file named `chocolate-doom.cfg`.

The configuration can be edited using the chocolate-setup tool.

## Command line options

Chocolate Doom supports a number of command line parameters, including
some extras that were not originally suported by the DOS versions. For
binary distributions, see the CMDLINE file included with your
download; more information is also available on the Chocolate Doom
website.

## Playing TCs

With Vanilla Doom there is no way to include sprites in PWAD files.
Chocolate Doom’s ‘-file’ command line option behaves exactly the same
as Vanilla Doom, and trying to play TCs by adding the WAD files using
‘-file’ will not work.

Many Total Conversions (TCs) are distributed as a PWAD file which must
be merged into the main IWAD. Typically a copy of DEUSF.EXE is
included which performs this merge. Chocolate Doom includes a new
option, ‘-merge’, which will simulate this merge. Essentially, the
WAD directory is merged in memory, removing the need to modify the
IWAD on disk.

To play TCs using Chocolate Doom, run like this:

```
chocolate-doom -merge thetc.wad
```

Here are some examples:

```
chocolate-doom -merge batman.wad -deh batman.deh vbatman.deh  (Batman Doom)
chocolate-doom -merge aoddoom1.wad -deh aoddoom1.deh  (Army of Darkness Doom)
```

## Other information

 * Chocolate Doom includes a number of different options for music
   playback. See the README.Music file for more details.

 * More information, including information about how to play various
   classic TCs, is available on the Chocolate Doom website:

     https://www.chocolate-doom.org/

   You are encouraged to sign up and contribute any useful information
   you may have regarding the port!

 * Chocolate Doom is not perfect. Although it aims to accurately
   emulate and reproduce the DOS executables, some behavior can be very
   difficult to reproduce. Because of the nature of the project, you
   may also encounter Vanilla Doom bugs; these are intentionally
   present; see the NOT-BUGS file for more information.

   New bug reports can be submitted to the issue tracker on Github:

     https://github.com/chocolate-doom/chocolate-doom/issues

 * Source code patches are welcome, but please follow the style
   guidelines - see the file named HACKING included with the source
   distribution.

 * Chocolate Doom is distributed under the GNU GPL. See the COPYING
   file for more information.

 * Please send any feedback, questions or suggestions to
   chocolate-doom-dev-list@chocolate-doom.org. Thanks!
