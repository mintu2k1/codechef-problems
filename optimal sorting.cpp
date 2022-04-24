#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>v(n),s(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        s=v;
        sort(s.begin(),s.end());
        multiset<int>m,p;
        int ans=0;
        for(int i=0;i<n;i++)
        {
                m.insert(v[i]);
                p.insert(s[i]);
                if(m==p)
                {
                    ans+=(*m.rbegin()-*m.begin());
                    m.clear();
                    p.clear();
                }
        }
        cout<<ans<<endl;
    }
}
