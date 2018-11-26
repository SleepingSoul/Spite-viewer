# Spite-viewer
Efficient and simple sprite viewer for testing purposes. Written with OpenGL and C++.
Code from https://learnopengl.com/Getting-started/Textures partially used as a template for this program.
glfw3, glad used for OpenGL.
stb_image from https://github.com/nothings/stb used for image loading.

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
