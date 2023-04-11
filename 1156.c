#include <stdio.h>

int main() {

    double sum = 0;
    int x = 1;

    for(int i = 1; i<= 39; i=i+2)
    {
        sum += (double)i/x;
        x *= 2;
    }

    printf("%.2lf\n",sum);

    return 0;
}
