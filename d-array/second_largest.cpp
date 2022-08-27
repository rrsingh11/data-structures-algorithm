// To find the index of second largest element in the array
#include<iostream>
using namespace std;

int sec_largest(int n,int arr[])
{
    int res=-1, largest=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] > arr[largest])
        {
            res = largest;
            largest = i;
        }
        else if(arr[i] != arr[largest])
        {
            if(res==-1 || arr[i]>arr[res])
                res = i;
        }
    }
    return res;
}
int main()
{
    int n;
    cin >> n; //5
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i]; // 12 78 23 55 33

    cout << sec_largest(n,arr); // 3
    return 0;
}