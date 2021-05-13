#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool a1[n],a2[n],i;
    for(i=0;i<n;i++)
    cin>>a1[i];// a1[] = {0, 1, 0, 1, 1, 1, 1};
    for(i=0;i<n;i++)
    cin>>a2[i];// a2[] = {1, 1, 1, 1, 1, 0, 1};
    int max=0,i,j;
   for(i=0;i<n;i++)
   {
         int sum1 = 0, sum2 = 0;
        for(j=i;j<n;j++)
        {
           sum1 += a1[j];
           sum2 += a2[j];
         if(sum1==sum2)
           {
             int l = j-i+1;
             if (l > max)
                max = l;
           }
       }
    }
    cout<< max;
}
