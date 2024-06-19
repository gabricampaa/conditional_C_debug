#include <stdio.h>

// Define DEBUG to enable debug mode
// This can be defined in the code or via the compiler command line
//#define DEBUG

#ifdef DEBUG
    #define DEBUG_PRINT(fmt, args...)    fprintf(stderr, "DEBUG: " fmt, ## args)
#else
    #define DEBUG_PRINT(fmt, args...)    /* Don't do anything in release builds */
#endif

int main() {
    int x = 10;
    int y = 20;
    int sum = x + y;

    DEBUG_PRINT("x: %d, y: %d\n", x, y);
    DEBUG_PRINT("sum: %d\n", sum);

    printf("The sum is %d\n", sum);

    return 0;
}


//gcc -DDEBUG -o main main.c

