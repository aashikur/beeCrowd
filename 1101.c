#include <stdio.h>

int main()
{
    int a,b,temp, sum;
    while(1)
    {
        sum = 0;
        scanf("%d %d",&a,&b);
        if(a<1 || b<1)
        {
            break;
        }

        if(a>b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        for (int i = a; i<=b; i++)
        {
            sum+=i;
            printf("%d ",i);
        }
        printf("Sum=%d\n",sum);

    }



    return 0;
}
