#include <stdio.h>
int main()
{
    double salary, rise;
    scanf("%lf",&salary);

    if(salary > 2000)
    {
        rise = salary*4/100;

        printf("Novo salario: %.2lf\n",salary+rise);
        printf("Reajuste ganho: %.2lf\n",rise);
        printf("Em percentual: 4 %%\n");

    }
    else if(salary > 1200)
    {
        rise = salary*7/100;

        printf("Novo salario: %.2lf\n",salary+rise);
        printf("Reajuste ganho: %.2lf\n",rise);
        printf("Em percentual: 7 %%\n");
    }
    else if(salary>800)
    {
        rise = salary*10/100;

        printf("Novo salario: %.2lf\n",salary+rise);
        printf("Reajuste ganho: %.2lf\n",rise);
        printf("Em percentual: 10 %%\n");
    }
    else if(salary>400)
    {
        rise = salary*12/100;

        printf("Novo salario: %.2lf\n",salary+rise);
        printf("Reajuste ganho: %.2lf\n",rise);
        printf("Em percentual: 12 %%\n");
    }
    else
    {
        rise = salary*15/100;

        printf("Novo salario: %.2lf\n",salary+rise);
        printf("Reajuste ganho: %.2lf\n",rise);
        printf("Em percentual: 15 %%\n");
    }



    return 0;
}
