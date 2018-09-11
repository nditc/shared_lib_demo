Let's Make a DLL
================

First let's define our libray. In our case we are gonna use `fib.cpp` as a library aka outer code.

Now build the object file.

```
> g++ -c fib.cpp -o fib.o
```

Then let's build the dll

```
> ld -shared fib.o -o fib.dll
```

The dll is complete! Now let's compile & run the main program!

```
> g++ main.cpp -ldl -o main.exe
> main.exe
```

And Congrats!
