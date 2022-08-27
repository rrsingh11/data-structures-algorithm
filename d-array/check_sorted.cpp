//To check if the array is sorted or not
#include<iostream>
using namespace std;

bool fun(int n, int arr[])
{
    for(int i=0;i<n;i++)
    {
        if(arr[i] > arr[i+1])
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n; // 5
    int arr[n]; 
    for(int i=0;i<n;i++)
        cin >> arr[i]; // 1 3 8 4 9
    
    cout << fun(n,arr) << endl; // 0

    return 0;
}