#include <iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--) 
    {
        long long int n;
        cin>>n;
        int m = 0,sb=0;
 
    
    for (int i = n; i; i >>= 2) 
    {
                if (i & 1)
            sb += (1 << m);
 
        
        m += 2;
    }
 
    cout<< n - sb<<endl;
    }
    return 0;
}
