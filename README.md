# ANSI C

[![Build Status](https://concourse.hellofreak.pp.ua/api/v1/teams/main/pipelines/ansi-c/jobs/build/badge)](https://concourse.hellofreak.pp.ua/teams/main/pipelines/ansi-c)
[![License](https://img.shields.io/github/license/Rihtarich/ansi-c.svg?style=popout)](LICENSE.md)
[![Hits-of-Code](https://hitsofcode.com/github/Rihtarich/ansi-c)](https://hitsofcode.com/view/github/Rihtarich/ansi-c)

The exercises are taken from the book `The C Programming Language`.

## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes.
See deployment for notes on how to deploy the project on a live system.

- [Prerequisites](#Prerequisites)
- [Installing](#Installing)
- [Deployment](#Deployment)
- [Author](#Author)
- [License](#License)

### Prerequisites

- TinyCC
- CMake
- Make or NMake

### Installing

Check your software for your operating system.

###### Linux

You should install the `TCC`.
For example, you will type a following command in a terminal if you use package manager `pacman`:
```bash
$ sudo pacman -S tcc
```
To check the `TCC` version type `$ tcc -vv` in a terminal.
The output of the command would be something like this:
```bash
tcc version 0.9.27 (x86_64 Linux)
install: /usr/lib/tcc
include:
  /usr/lib/tcc/include
  /usr/local/include
  /usr/include
libraries:
  /usr/lib64
  /lib64
  /usr/local/lib64
libtcc1:
  /usr/lib/tcc/libtcc1.a
crt:
  /usr/lib64
elfinterp:
  /lib64/ld-linux-x86-64.so.2
```

You should install the `CMake`.
For example, you will type a following command in a terminal if you use package manager `pacman`:
```bash
$ sudo pacman -S cmake
```
To check the `CMake` version type `$ cmake --version` in a terminal.
The output of the command would be something like this:
```bash
cmake version 3.14.5

CMake suite maintained and supported by Kitware (kitware.com/cmake).
```

You should install the `Make`.
For example, you will type a following command in a terminal if you use `Arch Linux`:
```bash
$ sudo pacman -S base-devel
```
But, you would type a following command in a terminal if you want to install `Make` directly:
```bash
$ sudo pacman -S make
```
To check the `Make` version type `$ make --version` in a terminal.
The output of the command would be something like this:
```bash
GNU Make 4.2.1
Built for x86_64-pc-linux-gnu
Copyright (C) 1988-2016 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
```

###### Windows

You should install the `TCC`.
You can download binary from [TCC offical site](https://bellard.org/tcc/) and install it.
After installation `TCC` you should add a path to `tcc.exe` to the system variable `PATH`.
To check the `TCC` version type `> tcc -vv` in a command prompt.
The output of the command would be something like this:
```pwsh
tcc version 0.9.27 (x86_64 Windows)
install: c:/tcc
include:
  c:/tcc/include
  c:/tcc/include/winapi
libraries:
  c:/tcc/lib
  C:/WINDOWS/system32
libtcc1:
  c:/tcc/libtcc1-64.a
```

You should install the `CMake`.
You can download binary from [CMake offical site](https://cmake.org/) and install it.
After installation `CMake` you should add a path to `cmake.exe` to the system variable `PATH`.
To check the `CMake` version type `> cmake --version` in a command prompt.
The output of the command would be something like this:
```pwsh
cmake version 3.15.0-rc2

CMake suite maintained and supported by Kitware (kitware.com/cmake).
```

You should install the `NMake`.
`The Microsoft Program Maintenance Utility (NMAKE.EXE) is a command-line tool included with Visual Studio ...`
So, you can download the [Visual Studio Community](https://visualstudio.microsoft.com/vs/community/) and install it.
After installation Visual Studio Community you may install only `MSVC` component.
Now, you should open Developer Command Prompt for example, `x86_64 Cross Tools Command Prompt for VS 2019`.
To see the `NMake` help type `> nmake /?` in an opened command prompt.
The output of the command would be something like this:
```pwsh
Microsoft (R) Program Maintenance Utility Version 14.21.27702.2
Copyright (C) Microsoft Corporation.  All rights reserved.

Usage:  NMAKE @commandfile
        NMAKE [options] [/f makefile] [/x stderrfile] [macrodefs] [targets]

Options:
...
```

## Deployment

After fetch this repository create following folders at the same level:
- A `build` folder for cmake generate files.
- A `bin` folder for instalation of executable files.

###### Linux

Pass into the folder `build`.
Type the following command in the terminal to generate files for `Make`:
```bash
$ cmake ../ansi-c
```
Type the following command in the terminal to build from `Makefile`:
```bash
$ make
```

###### Windows

Open Developer Command Prompt for example, `x86_64 Cross Tools Command Prompt for VS 2019`.
Pass into the folder `build` from opened command prompt.
Type the following command in the terminal to generate files for `NMake`:
```pwsh
> cmake ..\ansi-c -G "NMake Makefiles"
```
Type the following command in the terminal to build from `Makefile`:
```pwsh
> nmake
```

Now, you can find executable files in the folder `bin`.

## Built With

* [Tiny C Compiler](https://bellard.org/tcc/) - It is a small C compiler.
* [CMake](https://github.com/Kitware/CMake) - A tool designed to build software.
* [Concourse](https://github.com/concourse/concourse) - A continuous thing-doer.

## Author

* **Alexandr Rihtarich** - *Initial work* - [Rihtarich](https://github.com/Rihtarich)

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details
