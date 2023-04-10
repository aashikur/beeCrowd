#include <stdio.h>

int main()
{
    int n, cnt = 0;
    scanf("%d",&n);

    while(n--)
    {
        cnt++;
        printf("%d %d %d\n",cnt, cnt*cnt, cnt*cnt*cnt);
    }



    return 0;
}
