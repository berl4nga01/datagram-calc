# Datagram Calc
A simple program for calc common informations about ipv4 datagram.
The informations include: 
- Fragment's calc + Size per fragment;
- Total fragment's;
- Offset datagram calc.

The pourpose of this program is for study reasons, and check calcules of datagram without needing to use AI for this, or search on web... 

### Usage tutorial 

[!] - Remember, the measure unit is BYTES, when use, TYPE THE VALUE IN BYTES. 

The usage method is extremely simple. You should have a command line interface (WINDOWS!) and clone the repository. 
PS: For this, you must have github installed on your machine :) 

Copy the command below to clone 

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

For better understanding, here on below have a simple command of test 

`.\dtcalc 3000 1000` # A command to test a network with 3000 bytes to be transfered and 1000 bytes of MTU

*PS: For those who have interest, i make the sourcecode avaliable to be studied, evaluated, redistributed and recompiled on UNIX machines.* 
