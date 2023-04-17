#include <stdio.h>

int main()
{
    int max = 100, i;
    double N[max], money;

    scanf("%lf",&money);


    for(i = 0 ; i<max; i++)
    {
        printf("N[%d] = %.4lf\n",i,  money);
        money/=2;
    }


    return 0;
}
