#include <iostream>
#include <algorithm>
using namespace std;
 void reverse(int arr[], int n) {
    reverse(arr, arr + n);
}
 
int main()
{
    int n;
    cin>>n;
    int arr[n],i;
    for(i=0;i<n;i++)
    cin>>arr[i];
    reverse(arr, n);
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
 
    return 0;
}
