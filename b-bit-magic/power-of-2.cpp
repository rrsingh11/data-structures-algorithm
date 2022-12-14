//To check if the number is power of two or not
#include<bits/stdc++.h>
using namespace std;
/*
    Since we know that in numbers with power of '2', there is only one '1'. We just need to eliminate that '1'
    and check if the answer is 0 or not.
    To eliminate the right-most '1' we calculate - n AND n-1

    If n=4
                0000...0000 0 1 0 0 (4)
                0000...0000 0 0 1 1 (3)
        AND=>   0000...0000 0 0 0 0  (0) => This means answer is true
*/
bool power_of_two(int n)
{
    return ((n!=0)&&((n&(n-1))==0));
}
int main()
{
    int n = 4;
    int m = 6;
    cout << power_of_two(n) << endl; // 1
    cout << power_of_two(m) << endl; // 0
    return 0;
}