//To find the max profit by buying and selling of stocks
#include<iostream>
using namespace std;

int profit(int arr[], int n)
{
    int gain = 0;
    for(int i=1;i<n;i++)
    {
        if(arr[i] > arr[i-1])
            gain += (arr[i] - arr[i-1]); 
    }
    return gain;
}
int main()
{
    int arr[5] = {1,5,3,8,12};
    int result = profit(arr,5);
    cout << result; // 13
    return 0;
}