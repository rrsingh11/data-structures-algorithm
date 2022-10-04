// To find the frequency of all the elements in a sorted array
#include<iostream>
using namespace std;

void frequency(int arr[],int n)
{
    int i=1, count=1;
    while(i < n)
    {
        while(i < n && (arr[i]==arr[i-1]))
        {
            count++;
            i++;
        }
        cout << arr[i-1] << "->" << count << endl;
        count=1;
        i++;
    }
    if(n==1 || (arr[i-2] != arr[i-1]))
        cout << arr[i-1] << "->" << count;
}
int main()
{
    int arr[10] = {1,1,3,4,4,4,5,5,5,6};
    frequency(arr,10);
    return 0;
}
/*
    Output:- 
        1->2
        3->1
        4->3
        5->3
        6->1
*/