#include <iostream>
#include <bitset>
using namespace std;

#define INT_SIZE sizeof(int) * 8

int reverseBits(int n)
{
    int pos = INT_SIZE - 1; // maintains shift

    int reverse = 0;

    while (pos >= 0 && n)
    {
        if (n & 1)
        {
            reverse = reverse | (1 << pos);
        }

        n >>= 1; // drop current bit (divide by 2)
        pos--;   // decrement shift by 1
    }

    return reverse;
}

int main()
{
    int n = -100;

    cout << n << " in binary is " << bitset<32>(n) << endl;
    cout << "On reversing bits " << bitset<32>(reverseBits(n));

    return 0;
}