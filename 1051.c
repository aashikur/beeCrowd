#include <stdio.h>
int main(){
double taka, sum = 0, rate;
    scanf("%lf",&taka);
    if(taka <=2000){
        printf("Isento\n");
    }else{
    if(taka> 4500){
        rate = taka -4500;
        sum+= rate*28/100;
        taka -= rate;
    }
    if(taka> 3000){
        rate = taka -3000;
        sum+= rate*18/100;
        taka -= rate;
    }
    if(taka> 2000){
        rate = taka -2000;
        sum+= rate*8/100;
        taka -= rate;
    }
    printf("R$ %.2lf\n",sum);

    }



    return 0;
}
