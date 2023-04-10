#include <stdio.h>

int main()
{
    int n = 1;
    int x = 0, y = 0, z = 0;
    printf("MUITO OBRIGADO\n");
    while(n!=4)
    {
        scanf("%d",&n);
        if(n==1)
        {
            x++;
        }
        if(n==2)
        {
            y++;
        }
        if(n==3)
        {
            z++;
        }
    }
    printf("Alcool: %d\n",x);
    printf("Gasolina: %d\n",y);
    printf("Diesel: %d\n",z);

    return 0;
}
