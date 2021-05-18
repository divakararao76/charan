//given an array a={1,2,4,6} and N=6 print all the combinations
//that gives sum as N, you can pick the index any number of times

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int n=4;
int a[4]={1,2,4,6};
int N=6;
void printcombinationsArray(int ind,int N,vector<int>&ds)
{
    if(n==ind)
    {
        if(N==0)
        {
            for(auto it:ds)
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    //implement logic
    //pick up the element
    if(a[ind]<=N)
    {
        ds.push_back(a[ind]);
        printcombinationsArray(ind,N-a[ind],ds);
        ds.pop_back();
    }
    printcombinationsArray(ind+1,N,ds);
}
int main() {
    vector<int>ans;
	printcombinationsArray(0,N,ans);
	return 0;
}
/*
1 1 1 1 1 1 
1 1 1 1 2 
1 1 2 2 
1 1 4 
2 2 2 
2 4 
6 


*/
