/* To find all the prime numbers smaller than or equal to 'n'*/
//Wapas Dekho bhai
/*
The idea is create an array of n+1 elements and mark it true. If you get a prime number then print it and remove it's multiples till n.
Then get next prime number. This way we can reduce then number of traverssals
*/


#include<bits/stdc++.h>
using namespace std;

void sieve(int n)
{
    vector<bool> isPrime(n+1,true);
    for(int i=2;i*i<=n;i++)
    {
        if(isPrime[i])
        {
            for(int j=i*i;j<=n;j+=i) //Since for smaller number than i^2. Loop has already been traversed once
            {
                isPrime[j] = false;
            }
        }
    }
    for(int i=2;i<=n;i++)
        if(isPrime[i])
            cout<< i << " ";

}
int main()
{
    int n;
    cin >> n;
    sieve(n);
    return 0;
}

/*
Note:- We took i*i because suppose
To find number of prime numbers till 30.
at 2 we will cancel out ---> 4 6 8 10 12 14 16 18 20 22 24 26 28 30
at 3 we will start directly from 9 as we already covered 6.
So we start from 3*3 =>9
Similarly at 5, 10 15 20 would have already beeen canceled out because of 3 and 2.
So we start from 5*5=>25
*/