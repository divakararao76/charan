#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],i,k,r=0,j;
	for(i=0;i<n;i++)
	cin>>a[i];
	cin>>k;
  for(i=0;i<n;i++)
  	{
    		int s=0;
    		for(j=i;j<n;j++)
    		{
      	      s=s+a[j];
 			if(s==k)
        		r++;
    		}
  	}
  	cout<<r;
}
