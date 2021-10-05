#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(k%2==0){
            for (int j = 0; j < 2; j++)
            {
                int d=*max_element(a.begin(),a.end());
                for (int i = 0; i < a.size(); i++)
                    {
                        int e=a[i];
                        a[i]=d-e;
                    }
            }
        }
        else{
            int d=*max_element(a.begin(),a.end());
            for (int i = 0; i < a.size(); i++)
                {
                    int e=a[i];
                    a[i]=d-e;
                }
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}