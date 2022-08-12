//To find the sum of n natural numbers
#include<bits/stdc++.h>
using namespace std;
int sum_of_natural(int n)
{
    if(n==0)
        return 0;
    return (n+ sum_of_natural(n-1));
}
int main()
{
    int n;
    cin >> n; //5
    cout << sum_of_natural(n) << endl; //15
    return 0;
}