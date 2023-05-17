# cUnicodeLib

<p align="center">
      <img src="https://user-images.githubusercontent.com/59691442/183268126-b3d19e66-8f2d-463a-805e-ae6ef7cc6c01.png" alt="cmakeLogo" style="height:60px;"/>
      <img src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white" alt="cLogo" style="height:60px;"/>
      <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="cppLogo" style="height:60px;"/>
</p>

## Description

Simple C Library to write UTF8 code in Windows and macOS and Linux in console mode.

## Features

- [x] Write UTF8
- [x] Set font color
- [x] Set text highlight

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

### Example

#### Write UTF8

To write a text you can use the function below:

```c
PRINTF_UNICODE("кошка 日本国");
```

This one will write the previous text correctly in the console.

PLACEHOLDER FOR THE IMAGE

#### Change the color of the text

You can also change the color of the text with the function below:

```c
PRINTF_UNICODE(ESC_FG_RED "кошка 日本国");
```

PLACEHOLDER FOR THE IMAGE

#### Change the highlight of the text

You can also change the highlight of the text with the function below:

```c
PRINTF_UNICODE(ESC_BG_BLUE "кошка 日本国");
```

PLACEHOLDER FOR THE IMAGE

#### Combine font color and highlight

You can also combine both of them:

```c
PRINTF_UNICODE(ESC_FG_RED ESC_BG_BLUE "кошка 日本国");
```

PLACEHOLDER FOR THE IMAGE

#### Reset the color and highlight

To reset the color and highlight you can use the function below:

```c
PRINTF_UNICODE(ESC_RESET_ALL);
```

This will reset the color and highlight to the default one.

PLACEHOLDER FOR THE IMAGE

#### Use of varying arguments

You can also use varying arguments with the function below:

```c
PRINTF_UNICODE(ESC_FG_RED ESC_BG_BLUE  "кошка 日本国 %d %s", 42, "Hello World" ESC_RESET_ALL);
```

This one print the text with the color and takes two arguments to print (like the printf function).
The last argument is used to reset the color and highlight to the default one for the next print.

PLACEHOLDER FOR THE IMAGE

#### Notes

> **Note:**  
> If you don't call the `ESC_RESET_ALL` function, the color and highlight will be kept for the next prints.

## Test the lib

To test the lib a `demo.c` can be found in the `cUnicodeLib` folder. You can base your code on this file and by
compiling it with the `cUnicodeLib` files, you'll see a display example.

Placeholder for the demo image

![demo_image](https://user-images.githubusercontent.com/59691442/188744506-294cbed5-9492-4216-ad2f-b57fe21bf449.png)

## Github-Actions

[![flawfinder](https://github.com/Im-Rises/cUnicodeLib/actions/workflows/flawfinder.yml/badge.svg?branch=main)](https://github.com/Im-Rises/cUnicodeLib/actions/workflows/flawfinder.yml)
[![CMake](https://github.com/Im-Rises/cUnicodeLib/actions/workflows/cmake.yml/badge.svg?branch=main)](https://github.com/Im-Rises/cUnicodeLib/actions/workflows/cmake.yml)
[![CodeQL](https://github.com/Im-Rises/cUnicodeLib/actions/workflows/codeql.yml/badge.svg?branch=main)](https://github.com/Im-Rises/cUnicodeLib/actions/workflows/codeql.yml)
[![Microsoft C++ Code Analysis](https://github.com/Im-Rises/cUnicodeLib/actions/workflows/msvc.yml/badge.svg?branch=main)](https://github.com/Im-Rises/cUnicodeLib/actions/workflows/msvc.yml)
[![Cpp Cmake Publish](https://github.com/Im-Rises/cUnicodeLib/actions/workflows/cpp-cmake-publish.yml/badge.svg?branch=main)](https://github.com/Im-Rises/cUnicodeLib/actions/workflows/cpp-cmake-publish.yml)

The project is set with a set of different scripts:

- flawfinder : to check for security flaws in the code
- CMake : to build the project for Windows, macOS and Linux
- CodeQl : to check for code quality and security
- Microsoft C++ Code Analysis : Microsoft code analysis tool
- Cpp Cmake Publish : to publish the project on GitHub

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