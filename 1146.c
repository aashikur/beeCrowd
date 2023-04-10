#include <stdio.h>

int main()
{
    int n;
    while(n!=0){
        scanf("%d",&n);
        for(int i = 1; i<=n; i++)
        {
            printf("%d",i);
            if(i<n) printf(" ");

        }
        printf("\n");
    }


    return 0;
}
