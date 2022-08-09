// mainly works on single bits of given input
/*
Bitwise operators:
AND --->  &                         OR  --->  |                         XOR --->  ^
    0   0  => 0                         0   0  => 0                         0   0  => 0
    0   1  => 0                         0   1  => 1                         0   1  => 1                   
    1   0  => 0                         1   0  => 1                         1   0  => 1
    1   1  => 1                         1   1  => 1                         1   1  => 0
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=3, y=6;
    
    cout << "AND=> " << (x&y) << endl; // 2
    cout << " OR=> " << (x|y) << endl; // 7
    cout << "XOR=> " << (x^y) << endl; // 5

    /*
        3 => 0 0 1 1
        6 => 0 1 1 0
    ______________________    
      AND => 0 0 1 0 ---------------------> 2 
       OR => 0 1 1 1 ---------------------> 7 
      XOR => 0 1 0 1 ---------------------> 5 
    */






//Left Shift Operator =>  {' << '}

    x = 3;
    cout << (x << 1) <<endl; // 6
    cout << (x << 2) <<endl; // 12
    cout << (x << 4) <<endl; // 48
//    x << y -> Shifting the 'y' bits of 'x' towards left
/* for example:
    if x = 3 -> 0011
    (x << 1) ----> 0000 0110 [Shifting 1 bit]           ==> 6 
    (x << 2) ----> 0000 1100 [Shifting 2 bits]          ==> 12 
    (x << 4) ----> 0011 0000 [Shifting 4 bits]          ==> 48
 Note:- If we assume that the leading 'y' bits are 0. Then the result is equivalent to--> (x * 2^y)
        (3 * 2^1) = 6
        (3 * 2^2) = 12
        (3 * 2^4) = 48

*/  






// Right Shift Operator =>  {' >> '}

    x = 33;
    cout << (x >> 1) <<endl; // 16
    cout << (x >> 2) <<endl; // 8
    cout << (x >> 4) <<endl; // 2
//    x >> y -> Shifting the 'y' bits of 'x' towards right
/* for example:
    if x = 33 -> 0010 0001
    (x >> 1) ----> 0001 0000 [Shifting 1 bit]           ==> 16 
    (x >> 2) ----> 0000 1000 [Shifting 2 bits]          ==> 8
    (x >> 4) ----> 0000 0010 [Shifting 4 bits]          ==> 2
 Note:- If we assume that the leading 'y' bits are 0. Then the result is equivalent to--> floor(x / 2^y)
        floor(33 / 2^1) = 16
        floor(33 / 2^2) = 8
        floor(33 / 2^4) = 2
*/  





// Bitwise NOT => {' ~ '}
//Converts all the '0' to '1' and all '1' to '0'

//Unsigned Integer
    unsigned int a=1,b=5; // ---------range = (0 to 2³²-1)
    cout << (~a) << endl; // 4294967294
    cout << (~b) << endl; // 4294967290

/*
    for example:
        a => 0000...0001
        (~a) => 1111...1110
*/



//Signed Integer
    int p=1,q=5; // -------------------range = (-2³¹ to 2³¹-1)
    cout << (~p) << endl; // -2
    cout << (~q) << endl; // -6

/*
    for signed number we take '2s Compliment' of the Output number
        2s compliment of output = 2^n - (~x)
    It is because the first bit determines the sign.
*/

    return 0;
}
// Note:  Behaviour is undefined for negative numbers in  left-shift/right-shift/NOT operator. It tottaly depends on compiler.