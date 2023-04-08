#include <stdio.h>

int main()
{
    int cnt;
    for(float i = 0; i<=2.01 ; i=i+.2)
    {
        cnt = 1;
        int t = 3;
        while(t--)
        {
            if(i == 0 || i == 1 || i == 2)
                printf("I=%.0lf J=%.0lf\n",i,cnt+i);
            else
                printf("I=%.1lf J=%.1lf\n",i,cnt+i);
            cnt++;
        }

    }



    return 0;
}
