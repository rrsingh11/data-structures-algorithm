// To find the subsets of the string
#include<bits/stdc++.h>
using namespace std;

void subsets(string s, string current="",int i=0)
{
    if(i==s.length())
    {
        cout << current << endl;
        return;
    }
    subsets(s, current , i+1);
    subsets(s, current+s[i] , i+1);

}
int main()
{
    string s = "ABC";
    subsets(s);
    return 0;
}