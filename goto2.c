#include <stdio.h>

main(int argc, char* argv[])
{
    FILE *f1, *f2, *f3, *f4, *f5;

    if( ! (f1 = fopen("f1.txt", "r")) ) goto end;
    if( ! (f2 = fopen("f2.txt", "r")) ) goto end_f1;
    if( ! (f3 = fopen("f3.txt", "r")) ) goto end_f2;
    if( ! (f4 = fopen("f4.txt", "r")) ) goto end_f3;
    if( ! (f5 = fopen("f5.txt", "r")) ) goto end_f4;

    /*
    code
    ...
    code
    */

    printf("closing f5\n");
    fclose(f5);
    end_f4: printf("closing f4\n"); fclose(f4);
    end_f3: printf("closing f3\n"); fclose(f3);
    end_f2: printf("closing f2\n"); fclose(f2);
    end_f1: printf("closing f1\n"); fclose(f1);
    end: ;
    /* obs: esse ponto-e-virgula final se deve ao fato que os labels do goto 
    rotulam um comando; logo, se ha um label, deve haver um comando logo
    depois (mesmo que seja nulo, no caso de ponto-e-virgula). */
}
