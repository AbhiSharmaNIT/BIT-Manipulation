//Ques:- Count set bits using a lookup table

#include <iostream>
#include <bitset>
using namespace std;
 
#define B2(n) n, n + 1, n + 1, n + 2
#define B4(n) B2(n), B2(n + 1), B2(n + 1), B2(n + 2)
#define B6(n) B4(n), B4(n + 1), B4(n + 1), B4(n + 2)
#define COUNT_BITS B6(0), B6(1), B6(1), B6(2)
 
unsigned int lookup[256] = { COUNT_BITS };
 
// Function to count the total number of set bits in `n` using a lookup table
int countSetBits(int n)
{
 
    int count = lookup[n & 0xff] +      // consider the first 8 bits
        lookup[(n >> 8) & 0xff] +       // consider the next 8 bits
        lookup[(n >> 16) & 0xff] +      // consider the next 8 bits
        lookup[(n >> 24) & 0xff];       // consider last 8 bits
 
    return count;
}
 
int main()
{
    int n = -1;
 
    cout << n << " in binary is " << bitset<32>(n) << endl;
    cout << "The total number of set bits in " << n << " is "
         << countSetBits(n) << endl;
 
    return 0;
}