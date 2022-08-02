/* Idea is that to find power(x,n) ie x^n
if n%2==0
    power(x,n/2) * power(x,n/2) -------------> x^n/2 * x^n/2
else
    power(x,n-1)*x --------------------------------> x^(n-1) * x
*/
#include<bits/stdc++.h>
using namespace std;

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
    int ans = rec_power(x,n);
    cout << ans;
    return 0;
}

/*
Dry Run:-
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