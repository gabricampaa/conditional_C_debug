# Conditional Debug
A simple utility for debugging stuff to the console only if you want. Otherwise, without changing the code, do not print em!


### Usage
If you DONT want the debug info, compile with 

```sh
make compile
```
If you WANT the debug info, use


```sh
make compile_debug
```

### How to use it
Just include the
```C
#include "cond-debug.h"
```  
header in your C source.

Then, if there's any debug info you need to print to the console, just use it like this
```C
DEBUG_PRINT("foo %s", foo); 
```

And now the good part. Use the different compiling commands provided above to choose if you wanna print or not the stuff to the terminal.

 