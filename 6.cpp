#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],i;
	for(i=0;i<n;i++)
	cin>>a[i];
	int p[n],ls=0,rs=0,f=0,ind;
	p[0]=a[0];
	for(i=1;i<n;i++)
	p[i]=p[i-1]+a[i];
	for(i=1;i<n-2;i++)
	{
		ls=p[i-1];
		rs=p[n-1]-p[i];
		if(ls==rs)
		{
			ind=i;
			f=1;
			break;
		}
  }
	if(f)
	cout<<ind;
	else
	cout<<-1;
}
