/*
Idea: Since divisors always appear in Pairs
so, 
    x*y = n
    if x<=y
    then x*x<=n
Therefore x <= sqrt(n)

So traverse the number to square root of n instead of n
*/

#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int n)
{
    if(n==1)
        return false;
    for(int i=2;i*i <= n;i++)
    {
        if(n%i==0)
            return false;
        else return true;
    }
}
int main()
{
    int n;
    cin >> n;
    bool ans = checkPrime(n);
    cout << ans;
    return 0;
}