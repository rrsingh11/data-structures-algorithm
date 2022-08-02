/*
1) Since divisors occur in pairs then- 
    Let (x,y) be a pair
    x*y = n
    if x <= y
    x*x <= n
2) A number n can be written as product of power of prime factors
    example :  12 -> 2^2 * 3
    example :  450 -> 2 * 3^2 * 5^2
*/

#include<bits/stdc++.h>
using namespace std;

void printPrimeFActors(int n)
{
    if(n <= 1)
        return;
    for(int i=2;i*i<=n;i++)
    {
        while(n%i == 0)  // It will help in finding all the same prime-factors
        {
            cout << i << " ";
            n = n/i;
        }
    }
    if(n > 1) //If any number remains then that number is definetly the prime number. Hence print it
        cout << n << " ";
}
int main()
{   
    int n;
    cin >> n;

    printPrimeFActors(n);
    return 0;
}