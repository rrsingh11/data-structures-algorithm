// TO find the maximum sum of the subarray (Consecutive elements)
#include <iostream>
#include <algorithm>
using namespace std;

int max_sum(int arr[], int n)
{
    int result = 0;
    int maxEnd = arr[0];

    for(int i=1;i<n;i++)
    {
        maxEnd = max(maxEnd+arr[i], arr[i]);
        result = max(result, maxEnd);
    }
    return result;
}

int main()
{
    int arr[6] = {-3,8,-2,4,-5,6};
    cout << max_sum(arr,6); //11
}