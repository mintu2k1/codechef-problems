#include <iostream>
#include <bits/stdc++.h>
using namespace std;

char battle(char a, char b)
{
    if(a==b)
    {
        return a;
    }
    else if((a=='r' && b=='p')||(a=='p' && b=='r'))
    {
        return 'p';
    }
    else if((a=='p' && b=='s')||(a=='s' && b=='p'))
    {
        return 's';
    }
    else
    {
        return 'r';
    }
}

int main()
{
	// your code goes here
	int t, n;
	string str;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    cin>>str;
	    vector<char> result[n];
	    if(n==1)
	    {
	        cout<<str[0]<<"\n";
	    }
	    else
	    {
	        vector<char> r(n-1);
	        vector<char> p(n-1);
	        vector<char> s(n-1);
	        char temp;
	        char result[n-1] = str[n-1];
	        r[n-2]=battle('r',str[n-1]);
	        p[n-2]=battle('p',str[n-1]);
	        s[n-2]=battle('s',str[n-1]);
	        if(str[n-2]=='r')
	        {
	            result[n-2] = r[n-2];
	        }
	        else if(str[n-2]=='p')
	        {
	            result[n-2] = p[n-2];
	        }
	         else
	        {
	            result[n-2] = s[n-2];
	        }
	        for(int i=n-3;i>=0;i--)
	        {
	            temp=battle('r',str[i-1]);
	            if(temp=='r')
	            {
	                r[i] = r[i-1];
	            }
	            else if(temp=='p')
	            {
	                r[i] = p[i-1];
	            }
	            else
	            {
	                r[i] = s[i-1];
	            }
	            
	            temp=battle('p',str[i-1]);
	            if(temp=='r')
	            {
	                p[i] = r[i-1];
	            }
	            else if(temp=='p')
	            {
	                p[i] = p[i-1];
	            }
	            else
	            {
	                p[i] = s[i-1];
	            }
	            
	            temp=battle('s',str[i-1]);
	            if(temp=='r')
	            {
	                s[i] = r[i-1];
	            }
	            else if(temp=='p')
	            {
	                s[i] = p[i-1];
	            }
	            else
	            {
	                s[i] = s[i-1];
	            }
	            
	            if(str[i]=='r')
	            {
	                result = r[i];
	            }
	            else if(str[i]=='p')
	            {
	                result = p[i];
	            }
	            else
	            {
	                result = s[i];
	            }
	        }
	        for(int i=0;i<n;i++)
	        {
	            cout<<result[i];
	        }
	        cout<<"\n";
	    }
	}
	return 0;
}

