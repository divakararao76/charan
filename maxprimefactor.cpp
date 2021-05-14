#include <iostream>
using namespace std;
long long int N=1000001;
long long int seive[1000001];
void gen_modifiedsieve()
{
    seive[0]=seive[1]=1;
    for(int i=2;i<=N;i++)seive[i]=i;
    for(int i=2;i*i<=N;i++)
    {
        if(seive[i]==i)
        {
            for(int j=i*i;j<=N;j+=i)
            {
                if(seive[j]==j)
                {
                    seive[j]=i;
                }
            }
        }
    }
    
}

int main() {
	gen_modifiedsieve();
	int q;
	cin>>q;
	int max=0,c;
	while(q--)
	{
	   long long int n;
	    cin>>n;max=0;
	    while(n!=1)
	    {
	        c=seive[n];
	        n=n/seive[n];
			if(c>max)
			max=c;
	    }
		cout<<max<<endl;
	}
	return 0;
}
