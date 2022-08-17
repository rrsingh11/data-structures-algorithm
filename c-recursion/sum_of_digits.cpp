// To find the sum of digits 
#include<bits/stdc++.h>
using namespace std;

int rec_sod(int n)
{
    if(n==0)
        return 0;
    return (rec_sod(n/10)+ (n%10));
}
int it_sod(int n)
{
    int sum = 0;
    while(n)
    {
        sum = sum + (n%10);
        n/=10;
    }
    return sum;
}
int main()
{
    int n;
    cin >> n; // 456
    cout << rec_sod(n) << endl; //15
    cout << it_sod(n) << endl; //15
    return 0;
}
// Note: Whenever there is an option of iterative solution we use iterative solution because it will take less time and less auxillary space 