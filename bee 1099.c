#include <stdio.h>

int main()
{

    int t, a,b,sum, cnt=0, temp;
    scanf("%d",&t);
    while(t--)
    {
        sum =0;
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        for(int i = a+1; i < b; i++)
        {
            if(i%2==1)
                sum+=i;
        }
        printf("%d\n",sum);

    }


    return 0;
}
