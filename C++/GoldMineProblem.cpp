//Gold Mine Problem
//Dynamic Programming
//space = O(1) and time = O(n*m)

#include <bits/stdc++.h>
using namespace std;


class Solution{
public:

    int maxGold(int n, int m, vector<vector<int>> gold)
    {
        //bottom up dp approach 
        for(int j=m-2; j>=0; j--)
        {
            for(int i=0; i<n; i++)
            {
                int maxVal = -1;
                
                if((i-1) >= 0)
                {
                    maxVal = max(maxVal, gold[i-1][j+1]);
                }
                
                maxVal = max(maxVal, gold[i][j+1]);
                
                if((i+1) < n)
                {
                    maxVal = max(maxVal, gold[i+1][j+1]);
                }
                
                gold[i][j] += maxVal; 
            }
        }
        
        int ans = -1;
        
        for(int i=0; i<n; i++)
        {
            ans = max(ans, gold[i][0]);
        }
        
        return ans;
    }
};



int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}