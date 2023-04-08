#include <stdio.h>

int main()
{
    double a ;
    int cnt = 0, option = 0;
    double sum = 0;

    while(1)
    {
        scanf("%lf",&a);
        if( 0<= a &&  a <= 10)
        {
            sum+=a;
            cnt++;
            if(cnt == 2)
            {
                printf("media = %.2lf\n", sum/2);
                sum = 0;
                cnt = 0;
                printf("novo calculo (1-sim 2-nao)\n");

                while(option != 1 || option != 2)
                {
                    scanf("%d",&option);
                    if(option == 1)
                    {
                        break;
                    }
                    else if(option == 2)
                    {
                        break;
                    }
                    else
                    {
                        printf("novo calculo (1-sim 2-nao)\n");
                    }

                }
                if(option == 2)
                    break;

            }
        }
        else
        {
            printf("nota invalida\n");
        }

    }

    return 0;
}
