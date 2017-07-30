#include <stdio.h>
#include <stdint.h>
#include "div/div.h"
#include "mul/mul.h"
#include "sub/sub.h"
#include "sum/sum.h"

int main(int argc, char const *argv[])
{
    uint32_t x = 50;
    uint32_t y = 10;
    printf("%d + %d = %d \r\n", x, y, sum(x,y) );
    printf("%d - %d = %d \r\n", x, y, sub(x,y) );
    printf("%d * %d = %d \r\n", x, y, mul(x,y) );
    printf("%d / %d = %d \r\n", x, y, div(x,y) );
    return 0;
}
