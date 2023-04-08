#include <stdio.h>

int main()
{
    double a ;
    int cnt = 0;
    double sum = 0;

    while(1)
    {
        scanf("%lf",&a);
        if( 0<= a &&  a <= 10)
        {
            sum+=a;
            cnt++;
            if(cnt == 2)
                break;

        }
        else
        {
            printf("nota invalida\n");
        }

    }
    printf("media = %.2lf\n", sum/2);
    return 0;
}
