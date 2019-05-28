#include <stdio.h>

main(int argc, char* argv[])
{
    int i, j, k;

    for( i = 0; i < 100; ++i )
    {
        for( j = 0; j < 100; ++j )
        {
            for( k = 0; k < 100; ++k )
            {
                if( k == 10 )
                    /* break... ops. no. to the outer world */
                    goto outer_world;
            }
        }
    }

    outer_world:
    ;
}
