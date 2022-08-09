// To print the numbers from n to 1
#include<bits/stdc++.h>
using namespace std;

void n_to_one(int n)
{
    if(n==0)
        return;
    cout << n << " ";
    n_to_one(n-1);
}

void one_to_n(int n)
{
    if(n == 0)
        return;
    one_to_n(n-1);
    cout << n << " ";
}
int main()
{
    int n = 5;
    n_to_one(n); // 5 4 3 2 1
    cout << "\n";
    one_to_n(n); // 1 2 3 4 5
    return 0;
}