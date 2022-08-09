#include<bits/stdc++.h>
using namespace std;

int it_factorial(int n)
{
    int fac=1;
    for(int i=2;i<=n;i++)
        fac*=i;
    return fac;
}

int rec_factorial(int n)
{
    if(n==0)
        return 1;
    return n*rec_factorial(n-1);
}
int main()
{
    int n;
    cin >> n;
    int fac = rec_factorial(n);
    cout << fac;
    return 0;
}