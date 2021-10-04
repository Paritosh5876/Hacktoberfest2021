#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , m;
	int arr[n][m];

	int min = INT_MAX;
	int max  = INT_MIN;
	int desired_output = (1+(n*m)/2);

	for (int i = 0; i<n ; i++) {
		if (arr[i][0] < min) 
			min = arr[i][0];
		
		if (arr[i][m - 1] > max)
		    max = arr[i][ m -1 ];
	}

	int counter = 0;
	while(min < max) {
		counter = 0;
		int mid = (min + max) / 2;
		for(int i= 0;i<n;i++)
        {
            counter += upper_bound(arr[i], arr[i]+m, mid) -  arr[i];
        }
		if (counter < desired_output)
		    mid = mid + 1;
		else
			max = mid;
		
	}
	return min;
}