//Ques:- finding the position of right most set bit 
#include<iostream>
using namespace std;

// function to find the rightmost set bit
int PositionRightmostSetbit(int n)
{
	if (n == 0)
    {
        return 0;
    }
	
	int position = 1;
	int m = 1;

	while (!(n & m)) {

		// left shift
		m = m << 1;
		position++;
	}
	return position;
}

int main()
{
	int n = 18;
	// function call
	cout << PositionRightmostSetbit(n);
	return 0;
}
