#include <stdio.h>
#include<math.h>

int main()
{

    double x1,x2;
    double y1, y2;

    scanf("%lf %lf", &x1,&y1);
    scanf("%lf %lf", &x2,&y2);

    double distance = ((x2-x1) * (x2-x1)) + ((y2-y1)*(y2-y1));

    printf("%.4lf\n",sqrt(distance));


    return 0;
}
