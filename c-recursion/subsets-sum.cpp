// To find the subsets whose sum is equal to given number
//Sum-of-Subsets
#include<bits/stdc++.h>
using namespace std;

int check_sum(int *a,int sum, int n)
{   
    if(n==0)
        return ((sum==0)?1:0);
    return(check_sum(a, sum-a[n-1], n-1)+check_sum(a, sum, n-1));
}
int main()
{
    int n,sum;
    cin >> n >> sum; // 5 10
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];  //{1,9,4,6,5,5}
    cout << check_sum(arr,sum,n);
    return 0;
}