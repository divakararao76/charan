#include<iostream>
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
