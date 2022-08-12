//To check if the given string is palindrome or not
#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s,int st,int lt)
{
    if(st >= lt)
        return true;
    return ((s[st] == s[lt]) && isPalindrome(s, st+1 , lt-1));
}
using namespace std;
int main()
{
    string s1 = "abcba";
    string s2 = "abba";
    string s3 = "acbc";
    cout << isPalindrome(s1 , 0 , s1.size()-1) << endl;
    cout << isPalindrome(s2 , 0 , s2.size()-1) << endl;
    cout << isPalindrome(s3 , 0 , s3.size()-1) << endl;
    return 0;
}