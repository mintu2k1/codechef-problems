#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin >> t;
    while(t--){
        int n ,i=0, sum=0;cin >> n;
        vector<int> v , even , odd;
        for(i=0;i<n;i++){
            int x ; cin >>x;
            v.push_back(x);
            
            if(x%2)
                odd.push_back(x);
            else
                even.push_back(x);
        }
        sort(even.begin() , even.end());
        sort(odd.begin() , odd.end());
        if(even.size()==0 || odd.size()==0)
            cout << "-1\n";
        else if(even.size()==odd.size()){
            for(int i=0;i<even.size();i++)
                cout << odd[i] << " " << even[i] << " ";
            cout << "\n";
        }
        else if(even.size()<odd.size()){
            for(int i=0;i<even.size();i++)
                cout << even[i] << " " << odd[i] << " ";
            for(int i=even.size();i<odd.size() ; i++)
                cout << odd[i] << " ";
            cout << "\n";
        }
        else if(even.size()>odd.size()){
            for(int i=0;i<odd.size();i++)
                cout << odd[i] << " " << even[i] << " ";
            for(int i=odd.size();i<even.size() ; i++)
                cout << even[i] << " ";
            cout << "\n";
        }

    }
    return 0;
}
