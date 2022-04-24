#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x, y;
		cin>>x>>y;
		int val1, val2;
		val1=x*1;
		val2=y*2;
		int value=val1+val2;
		if(value%2==0)
		{
			cout<<"yes"<<endl;
		}
		else
		{
			cout<<"no"<<endl;
		}
	}
	return 0;
}
