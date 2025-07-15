//Author: Zhicheng Deng
#include <stdio.h>

int main()
{
    double myPai=0;
    long i, iSign, n;
    printf("Input initial int  n ( >=1 ): ");
    scanf("%ld", &n);

    while(n >=0 )
    {
        myPai = 1;
        i = 1;
        iSign = 1;

        while(i<=n)
        {
            iSign = -iSign;
            myPai = myPai + iSign/(2*i+1.0);
            i++;
        }
        myPai = myPai*4;
        printf("    The output is : %20.16f\n\n", myPai);

        printf("Is it precise enough?\n");
        printf("    Input -1 to quit.\n");
        printf("    Or Input a greater n for computing more precisely.\n\n");
        printf("The new int n : ");

        scanf("%ld", &n);
    }
    return 0;
}
