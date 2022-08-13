//If a ropen of size n is given and also lengths a,b,c are given which are are the constraints that rope could cut in these possible ways
//Then find the maximum number of pieces of rope.
#include<bits/stdc++.h>
using namespace std;

int max_pieces(int n, int a, int b, int c)
{
    if(n==0)
        return 0;
    if(n < 0)
        return -1;
    
    int res = max(max(max_pieces(n-a, a,b,c),max_pieces(n-b, a,b,c)),max_pieces(n-c, a,b,c));
    
    if(res == -1)
        return -1;
    
    return (res+1);
}
int main()
{
    int n,a,b,c;
    cin >> n;
    cin >> a >> b >> c;
    cout << max_pieces(n,a,b,c) << endl;
    return 0;
}
//Better solution using Dynamic Programming