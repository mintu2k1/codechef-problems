#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	float zer,pos,neg;
	int a[n];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	float p=0.0f ,m=0.0f ,z=0.0f;
	for(int i=1;i<=n;i++)
	{
		if(a[i]==0)
		{
			z+=1.0;
		}
		else if(a[i]>0)
		{
			p+=1.0;
		}
		else if(a[i]<0)
		{
			m+=1.0;
		}
		else
	    {
	    	break;
		}
	}
	cout<<z<<" "<<p<<" "<<m<<endl;
	 zer=z/n;
	 pos=p/n;
	 neg=m/n;
	cout<<fixed<<setprecision(6)<<zer<<endl;
	cout<<fixed<<setprecision(6)<<pos<<endl;
	cout<<fixed<<setprecision(6)<<neg<<endl;
	return 0;
}
