#include <stdio.h>

int main()
{
    int max = 1000;
    int N[max], cnt = 0;

    int t;
    scanf("%d",&t);

    for(int i = 0 ; i<max; i++)
    {
        printf("N[%d] = %d\n",i, cnt);

        cnt++;
        if(cnt == t) cnt = 0;

    }


    return 0;
}
