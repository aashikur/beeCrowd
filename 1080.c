#include <stdio.h>
#include<math.h>

int main()
{
    int t, num,max = -999999999, position, cnt = 0;

    t = 100;

    while(t--)
    {
        scanf("%d",&num);
        cnt++;
        if (num>max)
        {
            max = num;
            position = cnt;
        }
    }

    printf("%d\n%d\n",max, position);



    return 0;
}
