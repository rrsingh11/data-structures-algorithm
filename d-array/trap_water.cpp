//To find the total water that can be trapped
#include <bits/stdc++.h>
using namespace std;

int trapped_water(int arr[], int n)
{
    int lmax[n], rmax[n]; //Find the lmax array and rmax array 
    lmax[0] = arr[0];
    for(int i=1;i<n;i++)
        lmax[i] = max(lmax[i-1], arr[i]);
    
    rmax[n-1] = arr[n-1];
    for(int i=n-2;i>=0;i--)
        rmax[i] = max(rmax[i+1], arr[i]);

    int result = 0;
    for(int i=1;i<n-1;i++)
    {
        result = result + min(lmax[i], rmax[i]) - arr[i];
    }
    return result;
}
int main()
{
    int arr[5] = {5,0,6,2,3};
    cout << trapped_water(arr,5); // 6
    return 0;
}