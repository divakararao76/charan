#include<iostream>
#include<string>
using namespace std;
bool checkpal(int b,int e, string s)
{
    if(b>=e/2)
      return true;
    if(s[b]!=s[e-b-1])
      return false;
  return checkpal(b+1,e,s);
}
int main()
{
  int test;
  cin>>test;
  while(test--)
  {
    string str;
    cin>>str;
    int len=str.length();
    bool flag=checkpal(0,len,str);
    if(flag)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
  }
  return 0;
}
  
