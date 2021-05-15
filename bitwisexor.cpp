#include<bits/stdc++.h> 
using namespace std; 
/*class Solution{   
public:
    int maxSubarrayXOR(int N, int arr[])
    {    
           int c,i,max=0;
        for(i=0;i<N-1;i++)
        {
            c=arr[i]^arr[i+1];
            if(c>max)
            max=c;
        }
        return max;
    }
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, X;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.maxSubarrayXOR(N, arr) << endl;
    }
    return 0; 
} 
*/
int main()
{
    int n;
    cin>>n;
    int a[n],i,max=0,c;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n-1;i++)
    {
        c=a[i]^a[i+1];
        if(c>max)
        max=c;
    }
    /*if(i==n-1)
    {
        if(a[i]^a[i]>max)
        max=a[i]^a[i];
    }*/
    cout<<max;
    return 0;
    
}
