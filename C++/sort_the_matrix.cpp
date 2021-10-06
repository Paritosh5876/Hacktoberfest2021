#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    int arr[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin>>arr[i][j];
        }
    }

    int temp[n * n];
    int k = 0;

    for (int i = 0; i<n; i++) {
        for (int j = 0; j < n; j++) {
            temp[k++] = arr[i][j];
        }
    }

    sort(temp , temp + k);
    
    k = 0;
    for (int i = 0; i<n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = temp[k++];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;


}