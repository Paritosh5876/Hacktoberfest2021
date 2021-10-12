#include <bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"Enter the no of rows and columns\n";
	int n,m;
	cin >> n >> m;
	int dp[n+5][m+5];
	for(int i=0;i<n;i++) dp[i][0] = 1;
	for(int i=0;i<m;i++) dp[0][i] = 1;
	for(int i=1;i<n;i++){
	    for(int j=1;j<m;j++)
		dp[i][j] = dp[i-1][j] + dp[i][j-1];
	}
        cout << "No of paths possible for moving from top left cornor to bottom right cornor is :- ";
	cout << dp[n-1][m-1] << endl;
	
}
