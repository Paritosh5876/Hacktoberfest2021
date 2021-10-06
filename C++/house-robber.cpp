#include<iostream>
using namespace std;

int rob(vector<int>& A) {
    if(A.size() == 0) return 0;
    int n = A.size();
    vector<int> dp(n, 0);
    dp[0] = A[0];
    
    for(int i = 1; i < n; i++){
        dp[i] = max(dp[i-1], (i >= 2 ? dp[i-2] + A[i] : A[i]));
    }
    
    return dp[n-1];
}

int main() {
    vector A{2,7,9,3,1};
    cout<<rob(A);
}
