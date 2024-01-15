// Ques:- Check if a positive integer is a power of 2 without using any branching or loop.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (!(n & (n - 1)))
    {
        cout << "Number is power of 2" << endl;
    }
    else
    {
        cout << "Number is not power of 2";
    }

    return 0;
}