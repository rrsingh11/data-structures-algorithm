#include <bits/stdc++.h>
using namespace std;

//Recursive method
int count_digits(int n)
{
    if(n==0)
        return 0;
    return 1+count_digits(n/10);
}

int main()
{
    int n,count=0;
    cin >> n;
//Iterative method
    // while(n!=0)
    // {
    //     n = n/10;
    //     count++;
    // }    
    
//Recursive
    // count = count_digits(n);

//Logarithmic method
    count =  floor(log10(n)+1);
    cout << count;
    return 0;
}