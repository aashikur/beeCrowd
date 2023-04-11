#include <stdio.h>

int main()
{
    int N[10], v, sum;
    scanf("%d",&v);

    sum = v;

    for(int i = 0 ; i<10; i++)
    {
        printf("N[%d] = %d\n",i,sum);
        sum *= 2 ;
    }



    return 0;
}
