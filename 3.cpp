#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],i;
	for(i=0;i<n;i++)
	cin>>a[i];
	int len=n-1,left,right,min,max;
	left=-1;
	right=-1;
	min=a[0];
	max=a[len];
	for (int i = 1; i <= len; i++) 
  {
            		int p = a[i], q = a[len-i];
            		if (p < max) 
                right = i;
            		else 
                max = p;
            		if (q > min) 
                left = i;
            		else 
                min = q;
  }
        cout<<std::max(0, left + right - len + 1)
}
