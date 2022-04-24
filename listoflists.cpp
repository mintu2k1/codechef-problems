#include <iostream>
#include<map>
using namespace std;

int main()
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n, sum=0,high=-1;
	    cin>>n;
	    map<int,int> count;
	    for(int i=0;i<n;i++)
	    {
	        int temp;
	        cin>>temp;
	        count[temp]++;
	    }
	    for(auto x: count)
	    {
	        if(high<x.second)
	        high=x.second;
	        sum+=x.second;
	    }
	    if(high == n)
	    {
	        cout<<"0"<<endl;
	    }
	    else if(high <= 1 && n>=2)
	    {
	        cout<<"-1"<<endl;
	    }
	    else
	    {
	        cout<<(sum-high+1)<<endl;
	    }
	}
	return 0;
}

