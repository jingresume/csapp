#include <stdio.h>

bool is_little_endian(){
    int x = -2;
    typedef unsigned char * byte_pointer;
    byte_pointer start = (byte_pointer)&x;
    return  ~(*start & 0x1);
}

int main(int argc, char** argv)
{
    if(is_little_endian())
        printf("little");
    else
        printf("big");
    return 0;
}
