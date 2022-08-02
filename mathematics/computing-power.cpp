/* Idea for recursive is that to find power(x,n) ie x^n
if n%2==0
    power(x,n/2) * power(x,n/2) -------------> x^n/2 * x^n/2
else
    power(x,n-1)*x --------------------------------> x^(n-1) * x
*/

/* Idea for iterative using Binary Exponentiation
>Every number can be written as sum of powers of 2(Set bits in binary representation)
So basically when you get to find power(x,n) then represent the n into binary and multiply the places where it has 1.
example- x=3 n=10
10 in binary -> 1010
1 is at 2³ and 2¹ 
Then find power(3,8) and power(3,2)
*/
#include<bits/stdc++.h>
using namespace std;

//Iterative
int it_power(int x,int n)
{
    int res = 1;
    while(n>0)
    {
        if(n%2!=0) // or can be written (n&1) to optimize
            res = res*x;
        x = x*x;
        n = n/2; //or can be used (n>>2) to optimize
    }
    return res;
}


//Recursive
int rec_power(int x, int n)
{
    if(n==0)
        return 1;
    int temp = rec_power(x,n/2);
    temp = temp*temp;
    if(n%2 == 0)
        return temp;
    else 
        return temp*x;
}
int main()
{
    int x,n;
    cin >> x >> n;
    int ans = it_power(x,n);
    cout << ans;
    return 0;
}

/*
Dry Run (Recursive):-
power(3 , 5) --------------------------------->  243
temp = power(3,2)
temp = power(3,2) *  power(3*2)

(5%2!=0)
    return power(3,2)*power(3,2) * 3 ===> (3*3) * (3*3) *3

>power(3,2) ---------------------------------------> 9
temp = power(3,1)
temp = power(3,1) * power(3,1)

(2%2==0)
    return power(3,1)*power(3,1)  ===> 3 * 3

>power(3,1)      ----------------------------------> 3
temp = power(3,0)
temp = power(3,0) * power(3,0)

(1%2 != 0)
    return power(3,0) * power(3,0) * 3 ===> 1*1*3

>power(3,0) ---------------------------------------> 1
(n==0) 
return 1
*/                                  