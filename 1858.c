/**Bismillahir Rahmanir Rahim.**/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int T,N, nCnt = 0, ans = 1e9, Tth;
    scanf("%d",&T);
    while(T--)
    {
        cin >> N;
        if(N != 0){
            nCnt++;
            if(ans > N) {
                ans = N;
                Tth = nCnt;
            }
        }

    }

    cout << Tth << "\n";


    return 0;
}
