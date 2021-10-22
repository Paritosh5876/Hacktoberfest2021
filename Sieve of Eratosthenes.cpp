#include <bits/stdc++.h>
using namespace std;
 
void Sieve(int n)
{
    
    vector<bool>prime(n+1,true);
   
 
    for (int p = 2; p * p <= n; p++)
    {
        
        if (prime[p])
        {
            
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
 
    for (int i = 2; i <= n; i++)
        if (prime[i])
            cout << i << " ";
}
 

int main()
{
    int n ;
    
    cin>>n;
    
    Sieve(n);
    return 0;
}