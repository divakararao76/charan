#include<iostream>
using namespace std;
long long int x=1000000;
long long int s[1000000];
void genseiver()
{
	for(int i=0;i<x;i++)  //s[]={1,1,1,1,...1000000 times}
	s[i]=1;
	s[0]=s[1]=0;		//s[]={0,0,1,1,1....}
	for(int i=2;i*i<x;i++)
	{
		if(s[i]==1)				//i=2 then s[]={0,0,1,1,0,1,0,1,0,1,0,1,0,...}
		{					//i=3 then s[]={0,0,1,1,0,1,0,1,0,0,0,1,0,1,0,0,...}
			for(int j=i*i;j<=x;j=j+i)
				s[j]=0;
		}
	}
}
int main()
{
	genseiver();		//call to genseiver() function
	int number,lvalue,rvalue,loopi,sum=0;
	cin>>number;
  while(number--)
  {
    cin>>lvalue>>rvalue;
    sum=0;
    for(loopi=lvalue;loopi<=rvalue;loopi++)
    {
      if(s[loopi]==1)
        sum=sum+loopi;
    }
    cout<<sum<<endl;
  }
  
	return 0;
}
