/** Bismillahir Rahmanir Raham**/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    // 9 = 1 0 0 1          // 4 = 0 1 0 0
    // 6 = 0 1 1 0          // 6 = 0 1 1 0
    // ------------         // ----------------
    //15 = 1 1 1 1          // 2 = 0 0 1 0

    unsigned int a,b, ans;

    while(scanf("%u %u",&a,&b)!= EOF)
    {
        ans = a^b;
        cout << ans << "\n";
    }


return 0;
}
