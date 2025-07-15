// c4-3_test_while_scanf.c
#include <stdio.h>
int g;
int main( )
{

    char c;
if( ( ( c = getchar( ) ) != EOF) && (c >= 'a') && (c <= 'z') )

//scanf("%d", &a);

    printf("%d\n%c\n", c, c);



    return 0;
}



int main()
{
    int a, b, c, d, e, f;

    printf("Input the sporters' ranking:\n");
    printf("A: ");    scanf("%d", &a);
    printf("B: ");    scanf("%d", &b);
    printf("C: ");    scanf("%d", &c);
    printf("D: ");    scanf("%d", &d);
    printf("E: ");    scanf("%d", &e);
    printf("F: ");    scanf("%d", &f);

    if( (a == 1) + (b == 2) + (c == 3) +
            (d == 4) + (e == 5) + (f == 6) == 3 )
        printf("Guess it! U r a normal person.\n");

    return 0;
}
