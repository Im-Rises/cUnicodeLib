# cUnicodeLib

<p align="center">
      <img src="https://user-images.githubusercontent.com/59691442/183268126-b3d19e66-8f2d-463a-805e-ae6ef7cc6c01.png" alt="cmakeLogo" style="height:60px;"/>
      <img src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white" alt="cLogo" style="height:60px;"/>
      <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="cppLogo" style="height:60px;"/>
</p>

## Description

Simple C Library to write UTF8 code in Windows and macOS and Linux in console mode.

## Images

![Capture d'écran 2023-05-16 222504](https://github.com/Im-Rises/cUnicodeLib/assets/59691442/b8e94c42-91f5-4fa3-9ac6-ca853663c7a6)

## Video Demo

https://github.com/Im-Rises/cubeAscii/assets/59691442/f5bd5eae-67f1-4b75-88f0-6140808ba2f8

I use this lib in my project [cubeAscii](https://github.com/Im-Rises/cubeAscii) to display the cube in the console with
colors for Windows, macOS and Linux.

## Features

- [x] Write UTF8
- [x] Set font color
- [x] Set text highlight
- [x] Bold text
- [x] Manual FG and BG color selection (24 bits)

## QuickStart

### Setup

To use the lib, download the cUnicodeLib file header and include it in your project.

```c
#include "cUnicodeLib.h"
```

Then, you need to initialize the lib with the function `initUnicodeLib()`.

```c
void initUnicodeLib();
```

Be sure to test if the lib is correctly initialized, prefer using the function this way:

```c
if (initUnicodeLib() == 0)
{
    printf("UnicodeLib initialized successfully\n");
}
else
{
    fprintf(stderr, "UnicodeLib initialization failed\n");
    return 1;
}
```

### Example

#### Write UTF8

To write a text you can use the function below:

```c
printf("кошка 日本国");
```

### Set font color

To set the font color you can use the function below:

```c
printf(ESC_COLOR_RED "кошка 日本国");
```

#### Set text highlight

To set the text highlight you can use the function below:

```c
printf(ESC_HIGHLIGHT "кошка 日本国");
```

#### Reset all

To reset the color and highlight you can use the function below:

```c
printf(ESC_RESET_ALL "кошка 日本国");
```

#### Use of the printf varyings

You can still use the varying arguments of the printf function.

```c
printf(ESC_FG_B_BLUE ESC_BG_B_RED "Varying argument %d and %d" ESC_RESET_ALL "\n",1 , 2 );
```

Check the `main.c` file in the `test` folder for more examples.

#### Notes

> **Note:**  
> If you don't call the `ESC_RESET_ALL` function, the color and highlight will be kept for the next prints.

## Demo Example

The demo can be found in the `test` folder.
Use CMake or the command line to compile the demo.

The output should be like this:

![Capture d'écran 2023-05-16 222504](https://github.com/Im-Rises/cUnicodeLib/assets/59691442/b8e94c42-91f5-4fa3-9ac6-ca853663c7a6)

## Github-Actions

[![CMake](https://github.com/Im-Rises/cUnicodeLib/actions/workflows/cmake.yml/badge.svg?branch=main)](https://github.com/Im-Rises/cUnicodeLib/actions/workflows/cmake.yml)
[![flawfinder](https://github.com/Im-Rises/cUnicodeLib/actions/workflows/flawfinder.yml/badge.svg?branch=main)](https://github.com/Im-Rises/cUnicodeLib/actions/workflows/flawfinder.yml)
[![CodeQL](https://github.com/Im-Rises/cUnicodeLib/actions/workflows/codeql.yml/badge.svg?branch=main)](https://github.com/Im-Rises/cUnicodeLib/actions/workflows/codeql.yml)
[![Microsoft C++ Code Analysis](https://github.com/Im-Rises/cUnicodeLib/actions/workflows/msvc.yml/badge.svg?branch=main)](https://github.com/Im-Rises/cUnicodeLib/actions/workflows/msvc.yml)

The project is set with a set of different scripts:

- CMake : to build the project for Windows, macOS and Linux
- flawfinder : to check for security flaws in the code
- CodeQl : to check for code quality and security
- Microsoft C++ Code Analysis : Microsoft code analysis tool

## Documentations

cppreference:  
<https://en.cppreference.com/w/>

Microsoft:  
<https://docs.microsoft.com/en-us/cpp/?view=msvc-170>

Wikipedia:  
<https://en.wikipedia.org/wiki/ANSI_escape_code>

## Contributors

Quentin MOREL :

- @Im-Rises
- <https://github.com/Im-Rises>

[![GitHub contributors](https://contrib.rocks/image?repo=Im-Rises/cUnicodeLib)](https://github.com/Im-Rises/cUnicodeLib/graphs/contributors)