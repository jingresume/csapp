/************************************************************************
    > File Name: 9_5.c
    > Author: shejing
    > Mail: 2016192403@qq.com
    > Created Time: 2020年06月15日 星期一 00时12分50秒
***********************************************************************/
#include<stdio.h>
#include<unistd.h>
#include<sys/mman.h>
#include<sys/stat.h>
#include<fcntl.h>

void mmapcopy(int fd, int size){
    char* bufPtr;
    bufPtr = mmap(NULL, size, PROT_READ, MAP_PRIVATE, fd, 0);
    write(1,bufPtr, size);
    return;
}

int main(int argc, char* argv[])
{
    struct stat stat;
    int fd;

    if (argc!=2){
        printf("usage: %s <filename>\n", argv[0]);
    }

    fd = open(argv[1], O_RDONLY, 0);
    fstat(fd, &stat);
    mmapcopy(fd, stat.st_size);
    return 0;
}
