#include <bits/stdc++.h>
using namespace std;

int main() {

	int n, m;
	cin >> n >> m;
	int target; cin >> target;
	int arr[n][m];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}

	bool flag = false;
	int r = 0; int c = m - 1;
	while (r < m && c >= 0) {
		if (arr[r][c] = target) { 
			flag = true;
		}
		if (arr[r][c] > target) {
			c--;
		}
		else {
			r++;
		}
			

		if (flag) 
			cout<<"Element found";
		else
		    cout<<"Element not found";
	}
	return 0;
}