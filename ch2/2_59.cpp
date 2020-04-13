#include <stdio.h>

int main(int argc, char** argv)
{
    unsigned int x = 0x89ABCDEF;
    unsigned int y = 0x76543210;
    unsigned int z = (x&0xFF)|(y&~0xFF);
    printf("y=%x", z);
    return 0;
}
