/*#include<iostream>
using namespace std;
int main()
{
	
	    int num,sum=0;
	    cin>>num;
	    while(num!=0)
	    {
             sum = sum + (num&1);
	      num=num>>1;
      	     }
	     cout<<sum;
		return 0;
}

*/
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
 	    int sum=0;
	    //cin>>num;
	    while(N!=0)
	    {
             sum = sum + (N&1);
	      N=N>>1;}
//	     cout<<sum<<"\n";
	
	return sum;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}
  // } Driver Code Ends
