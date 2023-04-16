#include <stdio.h>

int main()
{
    int N, A = -5, cnt = 0, sum = 0;

    scanf("%d",&N);

    while(A < 1) scanf("%d",&A);

    for(int i = N; cnt<A; i++)
    {
        cnt++;
        sum+= i;
    }

    printf("%d\n",sum);

    return 0;
}
