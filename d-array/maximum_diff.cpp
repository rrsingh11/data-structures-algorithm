// To find the max difference of an array where j > i
#include<bits/stdc++.h>
using namespace std;

int max_diff(int arr[], int n)
{
    int res = arr[1]-arr[0];
    int minValue = arr[0];
    for(int j=1;j<n;j++)
    {
        res = max(res, arr[j]-minValue);
        minValue = min(minValue, arr[j]);
    }
    return res;
}
int main()
{
    int arr[7] = {2,3,10,6,4,8,1};
    int result = max_diff(arr,7);
    cout << result; // 8
    return 0;
}