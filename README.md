# keylime

A micro, compact virtual machine written in C

## Intro

`keylime` is a small, easy to use virtual machine written in C, that works off a small instruction set. You can also easily adjust the numbers of registers in

Some instructions include:

* Create an Integer in a register
* Create a Bool in a register
* Create a String in a register
* Swap items in registers.


## Installation

To build `keylime`, you can run:

```
$ make all
```

This will but a `lib.a` file and a `keylime` executable in a `bin/` director

To clean the build, you can run

```
$ make clean
```

### Usage

To use keylime, simply link the static library file called `lib.a` and put a `#include "keylimelib.h"` statement in a header file.

## License

Keylime is fulled MIT - licensed.
