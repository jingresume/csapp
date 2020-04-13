#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len){
    size_t i;
    for(i=0; i<len; i++){
		printf("%.2x", start[i]);
	}
//    printf("\t");
//    for(i=0; i<len; i++){
//	        printf("%.2b", start[i]);
//	}
    printf("\n");
}

void show_int(int x){
    printf("int  %.2d\t", x);
    show_bytes((byte_pointer)&x, sizeof(int));
}

void show_float(float x){
    printf("float %.2f\t", x);
    show_bytes((byte_pointer)&x, sizeof(float));
}

void show_short(short x){
    printf("short %.2d\t", x);
    show_bytes((byte_pointer)&x, sizeof(short));
}

void show_long(long x){
    printf("long %.2d\t", x);
    show_bytes((byte_pointer)&x, sizeof(long));
}

void show_double(double x){
    printf("double %.2f\t", x);
    show_bytes((byte_pointer)&x, sizeof(double));
}

int main(int argc, char** argv){
    int x    = 256;
    float y  = 256.0;
    double d = 256.0;
    long   l = 256l;
    show_int(x);
    show_int(-256);
    show_float(y);
    show_double(d);
    show_long(d);
    return 0;
}
