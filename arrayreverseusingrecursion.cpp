//TO FIND THE REVERSE OF THE GIVEN ARRYA BY USING RECURSIVE FUNCTION
#include<iostream>
using namespace std;
void ArrayReverse(int l,int r,int a[])
{
    if(l>=r)
    {
        return;
    }
    int t=a[l];
    a[l]=a[r];
    a[r]=t;
    return ArrayReverse(l+1,r-1,a);
}

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
    int n;
    cin>>n;
    int a[n],i;//={2,3,1,4};
    for(i=0;i<n;i++)
    cin>>a[i];
    ArrayReverse(0,n-1,a);
    for(auto i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
   }
    return 0;
}
