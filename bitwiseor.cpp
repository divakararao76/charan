#include<iostream>
using namespace std;
int main()
{
    /*int a[]={10,11,1,2,3};
    int out[5],i,j=0;
    for(i=0;i<4;i++)
    {
        out[j++]=a[i]|a[i+1];
    }
    if(i==4)
    out[j]=a[i]|a[i];
    for(i=0;i<5;i++)
    cout<<out[i]<<" ";
    return 0;*/
    int n;
    cin>>n;
    int a[n],out[n],i,j=0;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n-1;i++)
    {
        out[j++]=a[i]|a[i+1];
    }
    if(i==n-1)
    out[j]=a[i]|a[i];
    for(i=0;i<n;i++)
    cout<<out[i]<<" ";
    return 0;
}
