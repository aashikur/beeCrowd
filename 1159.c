#include <stdio.h>

int main() {
    int n;
    while(n)
    {
        int cnt = 0, sum  = 0;
        scanf("%d",&n);

        for(int i = n; cnt<5; i++){
            if(i%2 == 0 ) {
                cnt++;
                sum+= i;
            }
        }

       if(n!=0) printf("%d\n",sum);

    }
    return 0;
}
