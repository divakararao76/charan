#include<iostream>
using namespace std;
int main()
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
