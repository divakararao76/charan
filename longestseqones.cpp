#include <iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--) 
{
	    long long int n;
	    cin>>n;
	    int c=0;
	   while(n!=0)
	   {
	       n=n&(n<<1);
	       c++;
	   }
	   cout<<c<<endl;
	}
	return 0;
  
}
/*#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int maxConsecutiveOnes(int N)
    {
        int c=0;
        while(N!=0)
        {
            N=(N&(N<<1));
            c++;            
        }
        return c;
    }
};
int main() {
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n;
		cin>>n;//input n
		Solution obj;
		cout<<obj.maxConsecutiveOnes(n)<<endl;
	}
	return 0;
}
*/
