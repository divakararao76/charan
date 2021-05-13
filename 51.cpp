#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n],i;
  for(i=0;i<n;i++)
    cin>>a[i];
  int k,r=0,j;
  cin>>k;
  for(i=0;i < n;i++)
  {
    int sum = 0;
    for(j=i;j<n;j++)
    {
      sum += a[j];
      if (sum%k == 0)
        r++;
    }
  }
  cout << r;
}
