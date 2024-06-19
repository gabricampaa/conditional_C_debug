#include <stdio.h>
#include "cond-debug.h"


int main() {
    int x = 10;
    int y = 20;
    int sum = x + y;

    DEBUG_PRINT("x: %d, y: %d\n", x, y);
    DEBUG_PRINT("sum: %d\n", sum);

    printf("The sum is %d\n", sum);

    return 0;
}


//gcc -DDEBUG -o main main.c cond-debug.c

