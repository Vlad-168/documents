A Python 2.7 script for Linux which scans QR codes and types their contents into the current window, mimicking a hardware barcode scanner. Requires the zbar and OpenCV Python modules, and the `xte` command (contained in the xautomation package).

Usage
-----

Bind the script to a shortcut key or equivalent using your window manager or something like `xbindkeys`. To scan one or more codes, press your shortcut key. After a short delay, the codes will be inserted into your current window, followed by a space. If multiple QR codes are scanned, they will all be inserted, separated by spaces.
