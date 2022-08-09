//Two find the two odd occuring elements from the given array
#include<bits/stdc++.h>
using namespace std;
/*
So the idea is like previously to find the 1 occurance we did XOR of all the numbers.
Due to which all the even occuing numbers get cancelled out and the odd occuring number remained.

arr = {1,3,1,2,2,4,5,5}
Since, in this there are two odd occuring integers so we will get the XOR of the two numbers
        => 3 XOR 4
            0000...0000 0100
            0000...0000 0011
    XOR=>   0000...0000 0111

    As it shows that there is a difference of '3' bits in 4 and 3.

    Now the task is to determine the two numbers for which we will find the rightmost bit difference between the two numbers.
    And check with all the numbers if the bit is set or not.

    If that bit is set we will do the XOR with rest of the numbers in which that bit is set.
    Because of this all the even occured numbers with that bit set will cancel out and we will get the result.

    lly we will do this with the other part of numbers in which the bit is not set.


exp1:
    Here we found the last set bit with all other unset bit as zero
    Suppose
            XOR => 0000...0000 0 1 1 1
        (XOR-1) => 0000...0000 0 0 1 0
       ~(XOR-1) => 0000...0000 0 0 0 1
    

    Now if we do the AND of XOR and ~(XOR-1)
    We will get the right-most set bit and all the other unset bits will become 0
            XOR => 0000...0000 0 1 1 1
       ~(XOR-1) => 0000...0000 0 0 0 1
       AND==>      0000...0000 0 0 0 1

       Now check in from the array which all numbers have this bit set.
                    -{1,1,3,5,5}
                    In this 1 and 5 will cancel out after doing XOR and we will get the first odd occurance integer - 3


        Now in the other part where this bit is not set
                    -{2,2,4}
                    In this 2 will cancel out after doing XOR and we will get the second odd occurance integer - 4

*/
void method1(int arr[],int n)
{
    int ans=0,res1=0,res2=0;
    for(int i=0;i<n;i++)
        ans = ans ^ arr[i];

    int rm = ans & ~(ans-1); //exp1
    for(int i=0;i<n;i++)
    {
        if(arr[i] & rm !=0)
            res1 = res1 ^ arr[i];
        
        else res2 = res2 ^ arr[i];
    }
    cout << res1 << " " << res2;//res1-3 res-4
}
int main()
{
    int n = 8;
    int arr[n] = {1,3,1,2,2,4,5,5};
    method1(arr,n);
    return 0;
}