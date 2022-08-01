#include<bits/stdc++.h>
using namespace std;

// int it_factorial(int n)
// {
//     int fac=1;
//     for(int i=2;i<=n;i++)
//         fac*=i;
//     return fac;
// }

//Efficient approach

int main()
{
    int n,count=0;
    cin >> n;
    // int fac = it_factorial(n);

//For very small numbers as there will be overflow issue even for n=20
    // while(fac%10==0)
    //     count++;
    //     fac/=10;


//General solution is to find the number of 2s and 5s in the prime-facorization of factorial.
//In factorial number of 2s > number of 5s. Therefor we just need to calculate number of 5s in pf of the factorial.

// To find the number of 5s in the factorial we do floor(n/5) but after 25 there would be 2 factors of 5 and from or after 125 there would be 3 and so on.
//So we use the loop from i=5 and less than n and multiply it with 5 with every iteration  to check the count.
//For example=> n=50
            // 50/5 = 10
            //50/25 = 2
            // Answer of trailing zeros => 10+2 = 12 


    for(int i=5;i<=n;i*=5) //------------------------------------->O(log(n))
    {
        count = count + (n/i);
    }

    cout << count;
    return 0;
}