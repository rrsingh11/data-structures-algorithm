// To print the nth fibonacci
//Print the fiboncaci series
// fibonacci series - 0 1 1 2 3 5 8 13....
#include<bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if(n<=1)
        return n;
    return (fibo(n-1) + fibo(n-2));
}
int main()
{
    int n = 3;
    cout << fibo(n) << endl; //2
    //To print the fibonacci series
    for(int i=0;i<=n;i++)
        cout << fibo(i) << " "; //0 1 1 2
    return 0;
}