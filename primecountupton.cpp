#include<iostream>
using namespace std;
/*int main()
{
    long int number,loopi,count1,count2,loopj;
    cin>>number;
	count2=0;
    for(loopi=1;loopi<=number;loopi++)
    {
        count1=0;
        for(loopj=1;loopj<=loopi;loopj++)
        if(loopi%loopj==0)
        count1++;
        if(count1==2)
        count2++;
    }
	cout<<count2;
    return 0;
}
*/

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
	int number,loopi,count=0;
	cin>>number;
	for(loopi=2;loopi<=n;loopi++)
	{
		if(s[loopi]==1)
		count++;
	}
	cout<<count;
	return 0;
}
