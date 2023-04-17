#include <stdio.h>

int main()
{
    int max = 20;
    int N[max];

    int i = max;
    while(i--)
    {
        scanf("%d",&N[i]);
    }

    for(i = 0 ; i< max; i++)
    {
        printf("N[%d] = %d\n",i,N[i]);
    }

    return 0;
}
