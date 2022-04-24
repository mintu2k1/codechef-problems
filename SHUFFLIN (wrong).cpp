#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int N;
	    cin>>N;
	    int a[N];
	    cin>>a[N];
	    int E1=N/2;
	    int O1=N/2+N%2;
	    int E2=0, O2=0;
	    for(int i=0;i<N;i++)
	    {
	        if(a[i]%2==0)
	        E2++;
	        else
	        O2++;
	    }
	    int x=0;
	    if(E2-O1>0)
	    x=E2-O1;
	    else if(O2-E1>0)
	    x=O2-E1;
	    
	    cout<<N-x<<endl;
	}
	return 0;
}
