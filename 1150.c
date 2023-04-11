#include<stdio.h>
#include<math.h>
int main()
{
    int sum = 0, cnt = 0, x,y;
    scanf("%d %d",&x,&y);
    while(x>=y)
    {
        scanf("%d",&y);
    }
    for(int a = x; sum <=y; a++)
    {
        sum = sum + a;
        cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}
