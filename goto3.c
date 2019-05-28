#include <stdio.h>

send(to, from, count)
register short *to, *from;
register count;
{
    register n = (count + 7) / 8;
    if (count % 8 == 0 ) goto case_0;
    if (count % 8 == 7 ) goto case_7;
    if (count % 8 == 6 ) goto case_6;
    if (count % 8 == 5 ) goto case_5;
    if (count % 8 == 4 ) goto case_4;
    if (count % 8 == 3 ) goto case_3;
    if (count % 8 == 2 ) goto case_2;
    if (count % 8 == 1 ) goto case_1;
    case_0: do { *to++ = *from++; /* estou incrementando `to` tambem    */
    case_7:      *to++ = *from++; /* porque esta nao eh uma memoria     */
    case_6:      *to++ = *from++; /* de hardware que se auto incrementa */
    case_5:      *to++ = *from++;
    case_4:      *to++ = *from++;
    case_3:      *to++ = *from++;
    case_2:      *to++ = *from++;
    case_1:      *to++ = *from++;
            } while (--n > 0);
}

main()
{
    short to[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    short from[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int i;
    send(to, from, 10);
    for( i = 0; i < 10; ++i )
        printf("%d ", to[i]);
    printf("\n");
}
