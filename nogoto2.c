#include <stdio.h>

main(int argc, char* argv[])
{
    FILE *f1, *f2, *f3, *f4, *f5;

    if( f1 = fopen("f1.txt", "r") )
    {
        if( f2 = fopen("f2.txt", "r") )
        {
            if( f3 = fopen("f3.txt", "r") )
            {
                if( f4 = fopen("f4.txt", "r") )
                {
                    if( f5 = fopen("f5.txt", "r") )
                    {
                        /*
                           code
                           ...
                           code
                         */
                        printf("closing f5\n");
                        fclose(f5);
                    }
                    printf("closing f4\n"); fclose(f4);
                }
                printf("closing f3\n"); fclose(f3);
            }
            printf("closing f2\n"); fclose(f2);
        }
        printf("closing f1\n"); fclose(f1);
    }
}
