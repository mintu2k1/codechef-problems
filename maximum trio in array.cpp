#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()  //singed main() can also use
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int ans=((arr[n-1]-arr[0])*arr[n-2]);
        cout<<ans<<endl;
    }
	// your code goes here
	return 0;
}

