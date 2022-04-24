#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	int n, k, d;
	while(t--)
	{
	    cin>>n>>k>>d;
	    int a[n];
	    int total=0;
	    for(int i=0; i<n; i++)
	    {
	        cin>>a[i];
	        total+=a[i];
	    }
	    int div=(total/k);
	    if(div>d){
	       cout<< d <<endl;
	    }
	    else{
	        cout<<div<<endl;
	    }
	}
	return 0;
}


