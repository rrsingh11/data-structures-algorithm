#include<bits/stdc++.h>
using namespace std;

void u_divisors(int n)
{
    for(int i=1;i*i<=n;i++)
    {
        if(n%i == 0)
        {
            cout << i << " ";
            if(n/i != i)
                 cout << n/i << " ";
        }
    }
}

void o_divisor(int n)
{
    int i;
    for(i=1;i*i<=n;i++) // 1st half
    {
        if(n%i == 0)
            cout << i << " ";
    }
    for(;i>=1;i--) //2nd half
    {
        if(n%i == 0)
            cout << n/i << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    u_divisors(n);
    cout << endl;
    o_divisor(n);
    return 0;
}