/*#include <iostream>
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
	while(q--)
	{
	    int n;
	    cin>>n;
	    while(n!=1)
	    {
	        cout<<seive[n]<<" ";
	        n=n/seive[n];
	    }
	}
	return 0;
}
*/
#include <bits/stdc++.h>
#include<cmath>
using namespace std;

 void pFactors(int n)
{
    
    int c=0;
    
    while (n % 2 == 0)
    {
        c++;
        n = n/2;
    

    }
    cout<<"2"<<"^"<<c;
        
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        c=0;
        
        while (n % i == 0)
        {
                c++;
                n = n/i;
         }
        if(c!=0)
        cout<<"*"<<i<<"^"<<c;
    }
   
    if (n > 2)
    cout<<"*"<<n<<"^"<<"1";
      
}
 
int main()
{
    int n,t;
    cin>>t;
    if(t>=1&&t<=1000000)
        while(t--)
        {
            cin>>n;
                if (n>=1 && n<=1000000)
                {
                    pFactors(n);
                }
                cout<<"\n";
     
    }
    
    return 0;
}
