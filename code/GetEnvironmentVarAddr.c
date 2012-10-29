#include<stdio.h>
#include<stdlib.h>


main(int argc, char **argv)
{
        char *addr = getenv(argv[1]);

        printf("Address of %s is %p\n", argv[1], addr);
        printf("String present there is %s\n", addr);
        return 1;

}
