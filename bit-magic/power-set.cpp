//To find all the possible subsets of a string
#include<bits/stdc++.h>
using namespace std;
/*
    In this solution the basic idea is to assign a bit to every character in the string. 
    And check if the bit is set then print that character.

    Suppose string =    a b c
    3 charaacters means 2^3 possibilities and assign bits to every character from LSB to MSB
        i.e  c b a
             _ _ _ 

            There are three position and 8 combinations there 1st loop less than 2^n and second loop less than n

                       =    0 0 0 - " "
                            0 0 1 - "a"
                            0 1 0 - "b"
                            0 1 1 - "ab"
                            1 0 0 - "c"
                            1 0 1 - "ac"
                            1 1 0 - "bc"
                            1 1 1 - "abc"        
*/
void power_set(string str)
{
    int n = str.length();
    int power = pow(2,n);
    for(int i=0;i<power;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i & (1<<j))
            {
                cout << str[j];
            }
        }
        cout << endl;
    }
/*
Output:-
    " "
    a
    b
    ab
    c
    ac
    bc
    abc
*/

}
int main()
{
    string str = "abc";
    power_set(str);
    return 0;
}