#include <stdio.h>
#define pi 3.14159
int main()
{
    float A,B,C;
    scanf("%f %f %f",&A,&B,&C);

    printf("TRIANGULO: %.3f\n",A*C*.5);
    printf("CIRCULO: %.3f\n",pi*C*C);
    printf("TRAPEZIO: %.3f\n", .5*(A+B)*C);
    printf("QUADRADO: %.3f\n",B*B);
    printf("RETANGULO: %.3f\n",A*B);

    return 0;
}
