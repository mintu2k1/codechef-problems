#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[501];
    int odd[500];
    int even[500];
    while(t--)
    {
        int n,sum,od=0,ev=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2!=0)
            {
                odd[od]=a[i];
                od++;
            }
            else
            {
                even[ev]=a[i];
                ev++;
            }
        }
        if(od==0 || ev==0)
        {
            cout<<-1<<endl;
            continue;
        }
        for(int i=0;i<od;i++)
            cout<<odd[i]<<" ";
        for(int i=0;i<ev;i++)
            cout<<even[i]<<" ";
        cout<<"\n";
    }
    return 0;
}

