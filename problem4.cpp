#include <iostream>
using namespace std;

// Find the total number of bits needed to be flipped to convert `x` to `y`
int findBits(int x, int y)
{
	// take XOR of `x` and `y` and store in `n`
	int n = x ^ y;

	// Using Brian Kernighan’s algorithm to count set bits

	// `count` stores the total bits set in `n`
	int count = 0;

	while (n)
	{
		n = n & (n - 1);	// clear the least significant bit set
		count++;
	}

	return count;
}

int main()
{
	int x = 65;
	int y = 80;

	cout << "The total number of bits to be flipped is " << findBits(x, y);

	return 0;
}