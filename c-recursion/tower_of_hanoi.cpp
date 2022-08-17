// To solve the Tower of Hanoi problem
#include<bits/stdc++.h>
using namespace std;

void toh(int n, char A, char B, char C)//A is source and C is destination
{
    if(n == 1)
    {
        cout << "Move " << 1 << " from " << A << " to " << C << endl;
        return;
    }
    toh(n-1, A, C, B);
    cout << "Move " << n << " from " << A << " to " << C << endl;
    toh(n-1,B,A,C);
}

int main()
{
    int n = 3;
    char A='p',B='q',C='r';
    toh(n,A,B,C);   
    return 0;
}