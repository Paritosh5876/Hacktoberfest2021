#include <bits/stdc++.h>
using namespace std;

int main() {

	int n , m;
	cin >> n >> m;
	int arr[n][m];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j] << " "; 
		}
		cout << "\n";
	}

	int row_start = 0, row_end = n-1, col_start = 0, col_end = m-1;

	while(row_start <= row_end && col_start <= col_end) {
		for (int col = col_start; col <= col_end; col++) 
			cout<<arr[row_start][col]<<" ";
		row_start++;

		for (int row = row_start; row <= row_end; row++) 
			cout<<arr[row][col_end]<<" ";
		col_end--;

		for (int col = col_end; col >= col_start; col--) 
			cout<<arr[row_end][col]<<" ";
		row_end--;

		for (int row = row_end; row >= row_start; row--) 
			cout<<arr[row][col_start]<<" ";
		col_start++;

	}
	
	return 0;


}