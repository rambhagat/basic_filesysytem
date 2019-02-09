# basic_filesysytem
This is a basic file system that provides basic file system operations. It is very skeleton file system and it overlays at the top of the underlying file system. There exists one inode in basic file system for each inode in the underlying file system.

Organization:

The code is organised in following different files.

main.c - This file contains code to include module initialization and registration of the file system

mount.c - This file contains the mounting and superblock  related functions

inode.c - This file contains inode related operations.

file.c - This file contains file structure related operataions.

