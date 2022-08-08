//To find the number of set bits
#include<bits/stdc++.h>
using namespace std;
//Naive solution
/*If n is given and we have to find the set bits
    n=5
    We shift the bits towards right until n!=0 and find it's AND with 1 . If the answer is 1 then we increase the count.
    Complexity -> O(Total bits in n)
*/
int method1(int n)
{
    int count = 0;
    while(n!=0)
    {
        if(n&1 == 1)
            count++;
        n = n >> 1;
    }
    return count;
}
//Brian Kerningam's Algorithms
/*
In this solution at first we will find -  n AND n-1.
It is because, suppose n=5
                0000... 0000 0 1 0 1 (5)
                0000... 0000 0 1 0 0 (4)
        AND=>   0000... 0000 0 1 0 0 (4)
As I can see one N is eliminated therefore I can conclude that after every AND '1' n will be eliminated directly no matter what its position is.
And as we remove one '1' we increase the count by one.
Later we follow the same step until n>0
                0000...0000 0 1 0 0 (4)
                0000...0000 0 0 1 1 (3)
        AND=>   0000...0000 0 0 0 0 (0)

Since we run the loop two times the answer is 2.
    Complexity-> O(no. of set bits)
*/
int method2(int n)
{
    int count =0;
    while(n!=0)
    {
        n = n&(n-1);
        count++;
    }
    return count;
}
//Look Table Up Method
/*
    In this we require a bit of pre-processing.
    For which  create a table of 256 basically 2^8 and for every 8 bit array put the number of set bits in the table.

    After we initialize the table:
        Consider 32 bits into 4 chunks of 8 bits or 1 byte.
        So we check number of ones in 1 byte and then later right-shift it to check next chunk

        For checking one 1 byte use the table.
        Just find the AND of 1 byte with 8 set bits(255 / 0xff) then result will lie between 0 to 255
        Use the table by printing the result at that index
*/
int table[256];
void initialize()
{
    table[0] = 0;
    for(int i=1; i<256 ; i++)
        table[i] = (i&1) + table[i/2];

/*
    Suppose a number is given 5 
    We know that In 5 there are two set bits but to find out we do binary conversion 
    we divide it by 2 and put the remainder 1 then we repeat the process

    Similarly here also we are just checking the number of set bits in i/2 and to check if there is any remainder we are doing i&1 which checks the last bit.
    Since we are filling the table from bottom everytime we require i/2. We will get the value of set bits in  i/2.
*/
    // for(int i=0;i<256;i++)
    // {
    //     cout<<table[i] << endl;
    // }
}
int method3(int n)
{
    int count=0;
    count = table[n & 255]; // we can use 0xff as well because both are 8 set bits. 
    n = n>>8;
    count = count + table[n & 255];
    n = n>>8;
    count = count + table[n & 255];
    n = n>>8;
    count = count + table[n & 255];
    return count;
}

int main()
{
    int n = 5;
    cout << method1(n) << endl;
    cout << method2(n) << endl;
    initialize();
    cout << method3(n) << endl;
    return 0;
}