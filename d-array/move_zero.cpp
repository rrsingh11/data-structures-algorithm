//To move all the zeros to end
#include<iostream>
#include<algorithm>
using namespace std;

void move_to_end(int arr[],int n)
{
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] != 0)
        {   swap(arr[i],arr[count]);
            count++;
        }
    }
}
int main()
{
    int arr[] = {1,0,0,1,4,0,0,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    move_to_end(arr,size);
    for(int i=0;i<size;i++)
        cout << arr[i] << " "; //1 1 4 0 0 0 0 0
    return 0;
}