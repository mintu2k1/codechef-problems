#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    if(n==1)
	    {
	        cout<<"1\n";
	        continue;
	    }
	    int ans=1;
	    while(ans*2<=n)
	    {
	        ans*=2;
	    }
	    int a=n-ans+1;
	    if(n==ans)
	    {
	        cout<<ans/2<<"\n";
	    }
	    else
	    {
	        cout<<max(a,ans/2)<<"\n";
	    }
	    
	}
	return 0;
}

