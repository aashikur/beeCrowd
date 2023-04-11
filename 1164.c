#include <stdio.h>

int main()
{
    int isPerfect, sum, t;
    scanf("%d",&t);
    while(t--)
    {
        sum = 0;
        scanf("%d",&isPerfect);

        for(int i = 1; sum < isPerfect; i++)
        {
            sum+= i;
        }
        if(isPerfect == 1)
            printf("%d nao eh perfeito\n",isPerfect);
        else if(sum == isPerfect)
            printf("%d eh perfeito\n",isPerfect);
        else
            printf("%d nao eh perfeito\n",isPerfect);
    }


    return 0;
}
