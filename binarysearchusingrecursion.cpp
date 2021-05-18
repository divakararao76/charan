//TO SEARCH AN ELEMENT position IN A GIVEN ARRAY BY USING BINARY SEARCH USING RECURSION
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int low,int high,int x,int arr[])
{
    if(low>high)
    {
        return -1; //element not found return the -1 value
    }
    
    int mid=(low+high)/2; // to find the mid value
    if(arr[mid]==x)
    {
        return mid+1; //to return element position value
    }
    else if(arr[mid]<x)
    {
        return BinarySearch(mid+1,high,x,arr);
    }
    else
    {
        return BinarySearch(low,mid-1,x,arr);
    }
}
int main()
{
    
    int num,ele,i;
    cin>>num;
    int arr[num];
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    cin>>ele;
    cout<<BinarySearch(0,num-1,ele,arr);
}
