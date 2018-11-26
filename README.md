# Spite-viewer
Efficient and simple sprite viewer for testing purposes. Written with OpenGL and C++.

Usage:
```
SpriteViewer.exe someSprite.png 8 4 32 70
```
So the program should have 5 arguments:
- a name of sprite;
- a number of columns in sprite;
- a number of rows in sprite;
- delay between changing (in ms).

<b>Some important things:</b>
- a name should be in utf8;
- in current implementation supports only `png` format;
