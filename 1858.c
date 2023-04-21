/**Bismillahir Rahmanir Rahim.**/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() 
{
    int i,N, slap, minSlap = 1e9, minIndex;

    cin >> N;

    for(i = 1; i<=N; i++)
    {
        cin >> slap;
        if(slap < minSlap)
        {
            minSlap = slap;
            minIndex = i;
        }
    }

    cout << minIndex<< "\n";

    return 0;
}
