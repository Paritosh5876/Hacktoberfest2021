#include<bits/stdc++.h>
#define ll long long
#define mn 10000007
using namespace std;
void koli()
{
  
  ll n;
  cin>>n;
  vector<ll> v;
  for(ll i=0;i<n;i++)
  {
      int x;
      cin>>x;
      v.push_back(x);
  }
  sort(v.begin(),v.end());
  for(ll i=0;i<v.size();i++)
  {
      cout<<v[i]<<" ";
  }
}   
 
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(0);
  
    koli();
return 0;
 
}