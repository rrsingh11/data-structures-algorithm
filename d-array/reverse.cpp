//To reverse the array 
#include<iostream>
using namespace std;

void reverse(int arr[],int n)
{
    int ls=0,rs=n-1;
    while(ls < rs)
    {
        int temp = arr[ls];
        ls = rs;
        rs = temp;
        ls++;
        rs--;
    }
}
int main()
{
    int n = 5;
    int arr[]= {1,2,3,4,5};
    reverse(arr,n);
    for(auto it: arr)
    {
        cout << it << endl;
    }
    return 0;
}