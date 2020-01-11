
Debian
====================
This directory contains files used to package generod/genero-qt
for Debian-based Linux systems. If you compile generod/genero-qt yourself, there are some useful files here.

## genero: URI support ##


genero-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install genero-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your genero-qt binary to `/usr/bin`
and the `../../share/pixmaps/genero128.png` to `/usr/share/pixmaps`

genero-qt.protocol (KDE)

