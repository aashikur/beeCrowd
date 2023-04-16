#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    double x = b*b - 4 * a * c;

    printf("%lf\n",x);

    if (a !=0 && x >= 0)
    {
        double r1 = (-b + sqrt(x))/(2*a) ;
        double r2 = (-b - sqrt(x))/(2*a) ;
        printf("R1 = %.5lf\n",r1);
        printf("R2 = %.5lf\n",r2);
    }

    return 0;
}
