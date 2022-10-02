//To left rotate the array
#include<bits/stdc++.h>
using namespace std;

//To rotate 1 element
void rotate_one(int arr[],int n)
{
    int temp = arr[0];
    for(int i=1;i<n;i++)
        arr[i-1] = arr[i];
    arr[n-1] = temp;
}
//To rotate d elements
void rotate_naive(int arr[], int n,int d)
{
    for(int i=0;i<d;i++) //call rotate_one d times
    {
        rotate_one(arr, n);
    }
}

void rotate_better(int arr[], int n, int d)
{
    int temp[d];
    for(int i=0;i<d;i++)
        temp[i] = arr[i];
    
    for(int i=d;i<n;i++)
        arr[i-d] = arr[i];

    for(int i=0;i<d;i++)
        arr[n-d+i] = temp[i];
}
//Best Solution
void reverse(int arr[],int low, int high)
{
    while(low < high){
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

void rotate_best(int arr[], int n, int d)
{
    reverse(arr, 0 , d-1); // 3 2 1 4 5 6 7 8 9 0
    reverse(arr, d ,n-1); // 3 2 1 0 9 8 7 6 5 4
    reverse(arr,0,n-1); // 4 5 6 7 8 9 0 1 2 3 
}
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    int d = 3;
    // rotate_one(arr,10); //2 3 4 5 6 7 8 9 0 1
    // rotate_naive(arr,10,d); // 4 5 6 7 8 9 0 1 2 3
    // rotate_better(arr,10,d); //4 5 6 7 8 9 0 1 2 3
    rotate_best(arr,10,d); //4 5 6 7 8 9 0 1 2 3
    for(auto it: arr)
        cout << it << " "; 
    return 0;
}  