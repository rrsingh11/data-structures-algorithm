// Euclidean Algorithm
/* 
Let'b'be smaller than 'a'
then, gcd(a,b) = gcd(a-b,b)

It is because consider a=gx & b=gy where 'g' is gcd of a,b.
We can conclude that gcd(x,y)=1 as 'g' is the HIGHEST COMMON FACTOR.
So (a-b) = g(x-y) and in this case also 'g' will be HCF as there is no common factor between x & y other than 1
*/
#include<bits/stdc++.h>
using namespace std;

//Basic Euclidean Algo
int gcd(int a, int b)
{
    while(a!=b)
    {
        if(a>b)
            a-=b;
        else 
            b-=a;
    }
    return a;
}

//Optimized Euclidean Algorithm
int o_gcd(int a,int b)
{
    if(b==0)
        return a;
    else 
        return o_gcd(b,a%b);
}

int main()
{
    int a,b;
    cin >> a >> b;
    int ans = o_gcd(a,b);
    cout << ans;
    return 0;
}