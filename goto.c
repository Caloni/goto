#include <stdio.h>

main(int argc, char* argv[])
{
    if( argc != 5 ) /* espero quatro+um (o programa) argumentos */
        goto usage;
    /*
    do something 
    do something else
    more to do
    and more
    and more
    and more
    and more
    too much lines
    ...
    finished
    */
    return 0;

    usage:
    printf("How to use: %s one two three four\n", argv[0]);
    return 1;
}
