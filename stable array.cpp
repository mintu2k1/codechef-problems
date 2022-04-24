#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>a(n);
	    int maxi=0;
	    int elem=0;
	    bool isEqual=true;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    maxi=max(maxi,a[i]);
	    if(i==0)
	    {
	        elem=a[0];
	    }
	    else
	    {
	        if(a[i]!=elem)
	        {
	            isEqual=false;
	        }
	    }
	    }
	    if(isEqual)
	    cout<<0<<endl;
	    else if(maxi==a[n-1])
	    cout<<1<<endl;
	    else
	    cout<<2<<endl;
	}
	return 0;
}

