#include<stdio.h>

int main(){
    int product, unit;
    double price;

    scanf("%d%d%lf",&product,&unit,&price);
    double total = unit * price;

    scanf("%d%d%lf",&product,&unit,&price);
    total = total + (unit * price);

    printf("VALOR A PAGAR: R$ %.2lf\n",total);


return 0;}
