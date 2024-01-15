//Ques:- find Odd or Even number using bit manipulation

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    if (n&1 == 1)
    {
        cout<<"odd"<<endl;
    }
    else
    {
        cout<<"even";
    }

    return 0;
}