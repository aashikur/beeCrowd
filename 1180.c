#include <stdio.h>

int main()
{

    int N, cnt= 0,position, X, min  = 999999999;

    scanf("%d",&N);

    while(N--)
    {
        scanf("%d",&X);
        if(X<min)
        {
            min = X;
            position = cnt;
        }
        cnt++;
    }


    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",position);

    return 0;
}
