//To convert binary number to decimal
#include<bits/stdc++.h>
using namespace std;

void btd(int n)
{
    if(n==0)
        return;
    btd(n/2);
    cout << n%2;
}
int main()
{
    int n=6;
    btd(n); //110
    return 0;
}