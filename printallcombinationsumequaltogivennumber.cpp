//TO PRINT ALL COMBINATIONS SUM OF GIVEN NUMBER
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void PrintCombination(int N, vector<int>&ds)
{
    if(N==0)
    {
        for(auto it:ds)
        {
            cout<<it<<" ";
        }
    }
    cout<<endl;
    //implement logic
    for(int i=1;i<=N;i++)
    {
        ds.push_back(i);
        PrintCombination(N-i,ds);
        ds.pop_back();
    }
}


int main() {
	int N;
	cin>>N;
	vector<int>ans;
	PrintCombination(N,ans);
	return 0;
}
/*
output
3
1 1 1
1 2
2 1
3
*/
