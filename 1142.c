#include <stdio.h>

int main()
{
    int n, cnt = 0;
    scanf("%d",&n);
    n = n*4;
    while(n--)
    {
        cnt++;
        if(cnt%4 !=0 )
        {
            printf("%d ",cnt);
        }
        else
        {
            printf("PUM\n");
        }
    }



    return 0;
}
