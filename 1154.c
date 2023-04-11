#include<stdio.h>
int main()
{
    int num, cnt = 0, sum=0;
    do
    {
        num;
        cnt++;
        scanf("%d",&num);
        if(num>0)sum+=num;
    }
    while(num>0);

    cnt = (cnt==0)? 1: cnt-1;
    float ans = (float)sum/cnt;

    printf("%.2f\n",ans);

    return 0;
}
