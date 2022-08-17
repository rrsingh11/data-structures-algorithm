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
    toh(n-1, A, C, B); //Now n-1 to B till we reach the last
    cout << "Move " << n << " from " << A << " to " << C << endl;
    toh(n-1,B,A,C); // Now recursively all the disks of B to C 
}

int main()
{
    int n = 3;
    char A='p',B='q',C='r';
    toh(n,A,B,C);   
    return 0;
}
/*
    Output:-
        Move 1 from p to r
        Move 2 from p to q
        Move 1 from r to q
        Move 3 from p to r
        Move 1 from q to p
        Move 2 from q to r
        Move 1 from p to r
*/