// To print the numbers from n to 1
#include<bits/stdc++.h>
using namespace std;

void fun(int n)
{
    if(n==0)
        return;
    cout << n << " ";
    fun(n-1);
}
int main()
{
    int n = 5;
    fun(n); // 5 4 3 2 1
    return 0;
}