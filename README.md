# YaOS
Yet Another Operating System is a simple OS being built to help me learn how to build an OS. I have a goal to make an OS with a simple interpreter and build my own game within it.

This project is still in progress, I have started working on adding the game Snake to the OS. I also plan to comment up some of the code before I forget whats happening :) 

![20230428_23h03m00s_grim](https://user-images.githubusercontent.com/20425379/235268084-e3bc69ac-e4c7-4b89-a04b-5270623488f3.png)

## Resources

The project is heavily based on these following resources
* [os-dev](http://www.cs.bham.ac.uk/~exr/lectures/opsys/10_11/lectures/os-dev.pdf)
* [OSDev wiki](http://wiki.osdev.org/)
* [the little book about OS development](https://littleosbook.github.io)
* [JamesM's kernel development tutorials](https://web.archive.org/web/20160412174753/http://www.jamesmolloy.co.uk/tutorial_html/index.html)
* [Linux Kernel](https://kernel.org)

## Pre-requisites

The following packages will be required on your system in order to run this project
* `qemu`
* `nasm`
* `gmp`
* `mpfr`
* `libmpc`
* `gcc`
* `binutils`
* `i386-elf-gcc`
* `i386-elf-ld`

## Installation

Use the `make` command to build the project followed by the `make run` in order to set up the vm. Finally run `make clean` to clean back up all loose files
