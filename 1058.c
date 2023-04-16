#include <stdio.h>

int main()
{

    int t;
    scanf("%d",&t);

    while(t--)
    {
        int X, N = -999999999, count = 0, sum = 0;
        scanf("%d",&X);

        while(1>N)
        {
            scanf("%d",&N);
        }

        for(int i = X; count < N; i++)
        {
            if(i%2 == 1 || i%2 == -1)
            {

                sum+= i;
                count++;
                   //     printf("%d ",i );

            }
        }

        printf("%d\n",sum);

    }
    return 0;
}
