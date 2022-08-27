// To find the index of the largest element in the array
#include<iostream>
using namespace std;

int largest(int n, int arr[])
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] >= arr[res])
            res = i; 
    }
    return res;
}
int main()
{
    int n;
    cin >> n; // 1
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i]; // 23 54 32 44 10
    
    cout << largest(n,arr) << endl; // 1

    return 0;
}