// To solve the josephus problem
#include<bits/stdc++.h>
using namespace std;

int jos(int n, int k)
{
    if(n==1)
        return 0;
    return ((jos(n-1,k)+k)%n);
}
int main()
{
    int n,k;
    cin >> n >> k; // 5 3
    cout << jos(n,k) << endl; // 3
    return 0;
}