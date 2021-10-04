#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int r = 0;              // keeps track of row; starts at first row             
        int c = m-1;            // keeps track of column; starts at last column
        int max_row_index=-1;   // keeps track of result row index
        
    
        while(r<n && c>=0)
        {
            if(arr[r][c]==1)
            {
                max_row_index = r;
                c--;
            }
            else
                r++;
        }
        return max_row_index;
	    // code here
	}

};

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n , m;
		cin>>n>>m;
		vector <vector <int> > arr(n,vector<int>(m));
		for (int i = 0; i<n; i++) {
			for (int j = 0; j<m; j++) {
				cin>>arr[i][j];
			}
		}
		Solution ob;
		auto ans = ob.rowWithMax1s(arr, n, m);
		cout<<ans<<"\n";

	}
	return 0;
}