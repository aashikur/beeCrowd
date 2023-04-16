#include <stdio.h>
#include<math.h>

int main()
{
    int  N, TotalSum = 0, Csum= 0, Rsum = 0, Ssum = 0;
    int animal;
    char sym;

    scanf("%d",&N);

    while(N--)
    {
        scanf("%d %c",&animal, &sym);
        if(sym == 'C') Csum+= animal;
        if(sym == 'R') Rsum+= animal;
        if(sym == 'S') Ssum+= animal;
    }
    
    TotalSum = Csum+Rsum+Ssum;
    double Cper = ((double)Csum/TotalSum) * 100.0 ;
    double Rper = ((double)Rsum/TotalSum) * 100.0 ;
    double Sper = ((double)Ssum/TotalSum) * 100.0 ;

    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n",TotalSum, Csum,Rsum,Ssum);
    printf("Percentual de coelhos: %.2lf %%\n",Cper);
    printf("Percentual de ratos: %.2lf %%\n",Rper);
    printf("Percentual de sapos: %.2lf %%\n",Sper);

    return 0;
}
