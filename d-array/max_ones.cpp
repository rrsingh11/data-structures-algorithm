// To find the max number of consecutive 1s
#include<iostream>
#include <algorithm>
using namespace std;

int max_ones(int arr[], int n)
{
    int result = 0, temp =0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == 0)
            temp = 0;
        else 
        {
            temp++;
            result = max(result , temp);
        }
    }
    return result;
}
using namespace std;
int main()
{
    int arr[10] = {1,1,1,1,1,0,1,1,0,1};
    cout << max_ones(arr,10); // 5
    return 0;
} 