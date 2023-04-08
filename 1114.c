#include <stdio.h>

int main()
{
    int a;
    int pwd = 2002;

    while(1)
    {
        scanf("%d",&a);
        if(a!=pwd)
        {
            printf("Senha Invalida\n");
        }
        else
        {
            printf("Acesso Permitido\n");
            break;
        }
    }
    return 0;
}
