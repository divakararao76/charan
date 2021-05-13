
#include<iostream>
using namespace std;
int main()
{
	int number,loopi,count,loopj;
	cin>>number;
	for(loopi=1;loopi<=number;loopi++)
	{
		count=0;
		for(loopj=1;loopj<=loopi;loopj++)
		if(loopi%loopj==0)
		count++;
		if(count==2)
		cout<<loopi<<" ";
	}
	return 0;
}
