#include <iostream>
using namespace std;
long long int N=1000001;
long long int s[1000001];
void gensieve()
{
    for(int i=0;i<N;i++)    // s[]={1,1,1,1,1,1.......1000000 times}
    s[i]=1;
    s[0]=0;
    s[1]=0;		//s[]={0,0,1,1,1,1,1,1,1,....,1000000 times}
    for(long int i=2;i*i<N;i++)
    {
	    if(s[i]==1)
	    {
		    for(int j=i*i;j<=N;j=j+i)
		    {
			    if(s[j]==1)
				s[i]=s[i]+1;	// where i=2 s[]={0,0,500000,1,0,1,0,1,0,1,0....}
		     	    s[j]=0;
		    }
	    }
    }
}
int main()
{
	gensieve(); 		//call genseive() funtion
     	long long int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<s[n]<<endl;
	}
	return 0;
}
	
   
