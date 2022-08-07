//To chech if the bit is set or not
#include<bits/stdc++.h>
using namespace std;

/*  
    Suppose the number is 5 and we have to check whether the third bit is set or not.
    n=5
    k=3
Solution:- (Method 1)
    For this
    5  -> 0000...0000 0'1'01
    Third bit is 1.

    So what we can do is check AND of 3rd bit and '1' if the answer is true then it is set or else it is not. This is one method.
    For this initialize 1 then in binary it would be 
    1 -> 0000....0000 0001
    Now shift it till 3rd position i.e  "0000 0100", for this left shift is 2 times which is k-1 times 

    Now find the AND of 101 and 100  => 
               0 1 0 1
               0 1 0 0
             =>0 1 0 0 (4)
        As 4 is not equal to zero this bit is set 


Solution:- (method 2)
    In this method shift the kth bit at LSB or last position and check its AND with 1 and if the answer comes 1 then return true else false.
    5 -> 0000 ... 0000 0101
    shift 3rd bit to last postion/LSB.
    Use right bit shift 2 times i.e k-1 times
    n >> (k-1) 

    check AND of 0000 0001 and 0000 0001 
                0 0 0 1
                0 0 0 1
            =>  0 0 0 1 (1)
        As value is 1 then the bit is set  
*/
void method1(int n,int k)
{
    if(n & (1 << (k-1)) != 0) 
        cout << "Yes" << endl;
    else cout << "No" << endl;
}

void method2(int n, int k)
{
    if(n>>(k-1) & 1 == 1)
        cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main()
{
    int n=5;
    int k=3;

    method1(n,k);
    method2(n,k);
    return 0;
}