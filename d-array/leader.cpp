//To find the leaders of the array, basically a number which is largest to its right
#include<iostream>
using namespace std;

void leader(int arr[], int n)
{
    int current_leader = arr[n-1];
    cout << current_leader << " "; // 1
    for(int i= n-2;i>=0;i--)
    {
        if(arr[i] > current_leader)
        {
            current_leader = arr[i];
            cout << current_leader << " "; //  2 5 6 10
        }
    }
}
int main()
{
    int arr[10] = {5,9,8,10,6,4,3,5,2,1};
    leader(arr,10); // 1 2 5 6 10
    return 0;
}