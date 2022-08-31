//To remove duplicate from a sorted array
#include<iostream>
using namespace std;

int duplicates(int arr[],int n)
{
    int res = 1;
    for(int i=1;i<n;i++)
    {
        if(arr[i] != arr[res-1])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}
int main()
{
    int arr[] = {1,1,1,1,2,2,3,3,4,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << duplicates(arr,n) << endl; // 4
    return 0;
}