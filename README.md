# Datagram Calc
A simple program for calc common informations about ipv4 datagram.
The informations include: 
- Fragment's calc + Size per fragment;
- Total fragment's;
- Offset datagram calc.

The pourpose of this program is for study reasons, and check calcules of datagram with don't necessary of use AI for this, or search on web... 

### Usage tutorial 

[!] - Remember, the measure unit it's BYTES, when use, TYPE THE VALUE IN BYTES. 

The usage method it's extremly simple. You many have a command line interface (WINDOWS!) e clone the repository. 
PS: For this, you must have github installed on your machine :) 

Copy the command below for clone 

`git clone https://github.com/berl4ngaa/datagram-calc.git `

Access datagram-calc directory 

`cd datagram-calc`

Exec the program with the following args 

`.\dtcalc [arg1] [arg2]`

*Very important alert, arg1 and arg2 ARE INTEGER ARGS, so, be careful when type the value, don't type things like "." or "," please!* 
```
Arg1 - Data to be transfered 
Arg2 - MTU
 ```

For better understand, here on below have a simple command of test 

`.\dtcalc 3000 1000` # A command for test a network with 3000 bytes for be transfered and 1000 bytes of MTU

*PS: For who have intersting, i disponible the sourcecode for be studied, evaluated, avaliable, and recompiled on UNIX machines.* 
