#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int N, A, B;
	    cin>>N>>A>>B;
	    string s;
	    cin>>s;
	    int M=0, P=0;
	    for(int i=0;i<=N;i++)
	    {
	        if(s[i]=='0')
	        {
	            M++;
	        }
	        else if(s[i]=='1')
	        {
	            P++;
	        }
	    }
	    int ans = M*A+P*B;
	    cout<<ans<<endl;
	}
	return 0;
}

