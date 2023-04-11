#include <stdio.h>

int main()
{
    int max = 100, cnt = 0;
    float A[max], x;

    while(cnt<max)
    {
        scanf("%f",&x);

            A[cnt] = x;
            cnt++;
    }

    for(int i = 0 ; i< max; i++)
    {
        if(A[i]<=10)
            printf("A[%d] = %.1f\n",i,A[i]);
    }

    return 0;
}
