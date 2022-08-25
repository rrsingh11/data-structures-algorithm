// To print all the permutations of the string
#include<bits/stdc++.h>
using namespace std;

void perm(string s, int i=0)
{
    if(i==s.length()-1)
    {
        cout << s << " ";
        return;
    }
    for(int j=i;j<s.length();j++)
    {
        swap(s[i],s[j]);
        perm(s,i+1);
        swap(s[j],s[i]);
    }
}
using namespace std;
int main()
{
    string s;
    cin >> s; //ABCD
    perm(s,0);

    return 0;
}
/*
    Output:-
        ABCD ABDC ACBD ACDB ADCB ADBC BACD BADC BCAD BCDA BDCA BDAC CBAD CBDA CABD CADB CDAB CDBA DBCA DBAC DCBA DCAB DACB DABC
*/