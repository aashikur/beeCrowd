#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{

    unsigned long long int zero=0, num,dig = 0, temp, sum = 0, baze = 0, rem;

    cin >> num ;

    temp = num/10;
    while(temp)
    {
        baze++;
        temp/=10;
    }
    baze = pow(10,baze);
    temp = num;

    while(temp)
    {
        rem = temp%10;
        sum+= rem*baze;
        baze/=10;
        temp/=10;
    }
    temp = num;
    while(temp%10 == 0)
    {
        rem = temp%10;
        if(rem == 0 ) zero++;
        temp/=10;
    }

    while(zero--)
    {
        cout <<"0";
    }
    cout << sum <<"\n";




    return 0;
}
