#include<bits/stdc++.h>
using namespace std;
int main()
{
int test;
cin >> test;
while(test--)
{
set<char>str;
string s;
cin >> s;
for(char x:s)
{
str.insert(x);
}
long long int len = str.size();
long long int fact = len*(len+1)/2;
cout << fact << endl;
}
return 0;
}
