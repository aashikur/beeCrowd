#include <stdio.h>

int main()
{
    int  t;
    scanf("%d",&t);

    double a, b;

    while(t--)
    {
        scanf("%lf %lf",&a,&b);

        if(b!=0)
        {
            printf("%.1lf\n", a/b);
        }
        else
        {
            printf("divisao impossivel\n");
            
        }

    }
    return 0;
}
