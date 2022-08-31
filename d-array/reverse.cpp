//To reverse the array 
#include<iostream>
using namespace std;

void reverse(int *arr,int n)
{
    int ls=0,rs=n-1;
    while(ls < rs)
    {
        int temp = arr[ls];
        arr[ls] = arr[rs];
        arr[rs] = temp;
        ls++;
        rs--;
    }
}

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n = 5;
    int arr[]= {1,2,3,4,5};
    reverse(arr,n);
    printArray(arr,n); // 5 4 3 2 1
    return 0;
}