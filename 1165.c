#include <stdio.h>

int main()
{
    int isPrime, cnt, t;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&isPrime);
        cnt = 0;
        for(int i = 1; i<= isPrime; i++)
        {
            if(isPrime%i == 0) cnt++;
        }
        if(cnt == 2)
            printf("%d eh primo\n",isPrime);
        else
            printf("%d nao eh primo\n",isPrime);
    }


    return 0;
}
