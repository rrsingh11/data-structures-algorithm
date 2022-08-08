// To find the number which occured odd number of times 
#include<bits/stdc++.h>
using namespace std;
/*
    So we can easily solve this using XOR
    as- x ^ x = 0
        x ^ y = y ^ x
       (x ^ y)^z = x ^ (y ^ z)
       x ^ 0 = x

    So we will justdo the XOR of all the numbers-
        - It will cancel out all the numbers occured even number of times and at last we will get the number which occured odd no. of times.
*/
int odd_occurance(int arr[],int n)  
{
    int ans=0;
    for(int i=0;i<n;i++)
        ans=ans ^ arr[i];
    return ans;
}
int main()
{
    int n = 5;
    int arr[n] = {1,1,3,3,4};
    cout << odd_occurance(arr,n) << endl; // 4
    return 0;
}