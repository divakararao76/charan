// TO FIND THE FACTORIAL OF GIVEN NUMBER USING RECURSION
#include<iostream>
using namespace std;
int n;
int factorial(int i)
{
    if(i>=n)
    {
        return n;
    }
    else
    {
        return i*factorial(i+1);
    }
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
    cin>>n;
    int i=1;
    cout<<factorial(i);
    }
    return 0;
}
