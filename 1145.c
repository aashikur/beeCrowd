#include <stdio.h>

int main()
{
    int n,m, cnt = 0;
    scanf("%d %d",&n,&m);

    for(int i = 1; i<=m; i++)
    {
        printf("%d",i);
        if(i%n != 0) printf(" ");
        else printf("\n");
    }


    return 0;
}
