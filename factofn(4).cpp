#include <iostream>
#include<cmath>
using namespace std;
long int p=100001;
long long int s[100001];
void fact()
{

s[0]=1;

long long int po=(pow(10,9))+7;
int c=0;
for (int i=1;i<100001;i++)
s[i]=(s[i-1]*i)%po;
//return s[n];
}

int main()
{
    fact();
	int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<s[n]<<endl;
    }
    return 0;
}
