#include<iostream>
using namespace std;
int main()
{
	int n,i,j,r=0;
	cin>>n;
	bool x[n]={true};
	i=2;
	while(i*i<n)
	{
		for(j=2;j*i<n;j++)
		x[j*i]=false;
		i++;
		while(x[i]==false && i*i<n)
		i++;

	}
	for(i=2;i<n;i++)
	{
		if(x[i]==true)
		r++;
	}
	cout<<r;
  return 0;
}
