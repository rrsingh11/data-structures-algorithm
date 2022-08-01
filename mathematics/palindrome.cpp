// Compute the reverse and check if it is equal or not
#include <bits/stdc++.h>
using namespace std;

bool palindrome(int n)
{
    int rev=0;
    int temp = n;
    while (temp!=0)
    {
        int ld = temp%10;
        rev = rev*10 + ld;
        temp/=10;
    }
    return (rev == n);
}
int main()
{
    int n;
    cin >> n;
    cout << palindrome(n);
    return 0;
}