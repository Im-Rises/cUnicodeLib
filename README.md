# cUnicodeLib

<p align="center">
      <img src="https://user-images.githubusercontent.com/59691442/183268126-b3d19e66-8f2d-463a-805e-ae6ef7cc6c01.png" alt="cmakeLogo" style="height:60px;"/>
      <img src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white" alt="cLogo" style="height:60px;"/>
      <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="cppLogo" style="height:60px;"/>
</p>

## Description

Simple C Library to write UTF8 code in Windows and macOS and Linux in console mode.

## Features

- [x] Write UTF8 code in Windows and macOS and Linux in console mode.
- [x] Use color in console mode.
- [x] Highlight text in console mode.

## QuickStart

To use the lib, download the two cUnicodeLib files header and source file.
- cUnicodeLib.h
- cUnicodeLib.c

Add them to the project and call the init function below before calling any of the macros.

```c
void initUnicodeLib();
```

### Functions

The different functions you can use are listed below:

| Function             | Description                                                              | 
|----------------------|--------------------------------------------------------------------------|
| PRINTF_UNICODE       | Equivalent to printf with utf8 implementation                            |
| PUTS_UNICODE         | Equivalent to puts with utf8 implementation                              |
| PRINTF_UNICODE_COLOR | Equivalent to printf with utf8 text highlight or colored, implementation |            
| PUTS_UNICODE_COLOR   | Equivalent to puts with utf8 text highlight or colored, implementation   |

### Color text parameters

By passing one of the following macros as a first parameter in the functions `PRINTF_UNICODE_COLOR` or `PUTS_UNICODE_COLOR`, you can change the color of the text.

| Function             | Description                                                              | 
|----------------------|--------------------------------------------------------------------------|
| RED                  | Red color                                                                |
| GREEN                | Green color                                                              |
| YELLOW               | Yellow color                                                             |
| BLUE                 | Blue color                                                               |
| MAGENTA              | Magenta color                                                            |
| CYAN                 | Cyan color                                                               |
| WHITE                | White color                                                              |

[//]: # (| BRIGHT_BLACK         | Bright black color                                                       |)

[//]: # (| BRIGHT_RED           | Bright red color                                                         |)

[//]: # (| BRIGHT_GREEN         | Bright green color                                                       |)

[//]: # (| BRIGHT_YELLOW        | Bright yellow color                                                      |)

[//]: # (| BRIGHT_BLUE          | Bright blue color                                                        |)

[//]: # (| BRIGHT_MAGENTA       | Bright magenta color                                                     |)

[//]: # (| BRIGHT_CYAN          | Bright cyan color                                                        |)

[//]: # (| BRIGHT_WHITE         | Bright white color                                                       |)

### Highlight text parameters

By passing one of the following macros as a first parameter in the functions `PRINTF_UNICODE_COLOR` or `PUTS_UNICODE_COLOR`, you can change the highlight of the text.

| Function             | Description                                                              | 
|----------------------|--------------------------------------------------------------------------|
| HIGHLIGHT_BLACK      | Black highlight                                                          |
| HIGHLIGHT_RED        | Red highlight                                                            |
| HIGHLIGHT_GREEN      | Green highlight                                                          |
| HIGHLIGHT_YELLOW     | Yellow highlight                                                         |
| HIGHLIGHT_BLUE       | Blue highlight                                                           |
| HIGHLIGHT_MAGENTA    | Magenta highlight                                                        |
| HIGHLIGHT_CYAN       | Cyan highlight                                                           |

## Test the lib

To test the lib a `demo.c` can be found in the `cUnicodeLib` folder. You can base your code on this file and by compiling it with the `cUnicodeLib` files, you'll see a display example.

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

## Contributors

Quentin MOREL :

- @Im-Rises
- <https://github.com/Im-Rises>

[![GitHub contributors](https://contrib.rocks/image?repo=Im-Rises/cUnicodeLib)](https://github.com/Im-Rises/cUnicodeLib/graphs/contributors)