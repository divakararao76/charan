#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],i;
        for(i=0;i<n;i++)
        cin>>a[i];
        int total=0;
        for(i=0;i<n;i++)
        {
            if(total>=a[i])
            total=total-a[i];
            else
            total=total+a[i];
        }
        total=total%360;
        if(total==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
    
    
}
