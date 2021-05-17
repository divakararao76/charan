#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long int n,k;
    cin>>n>>k;
    cout<<(1<<k)|n<<endl;
  }
}
/*#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    int setKthBit(int N, int K)
    {
        
        
	   int y = 1<<K;
	   return N|y;
	  //cout<<(|y)<<endl;
	
}

    
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        
        Solution ob;
        int ans = ob.setKthBit(N,K);
        cout << ans << endl;
    }
    return 0;
} */
