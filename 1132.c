#include <stdio.h>

int main()
{
    int a,b, sum = 0, temp;
    scanf("%d %d",&a,&b);

    if(a>b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    for(int i = a; i<=b ; i++)
    {
        if(i%13 != 0)
            sum+=i;
    }

    printf("%d\n",sum);
    return 0;
}
