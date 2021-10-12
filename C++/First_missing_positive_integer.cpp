// given unsorted array
// time => O(n)
// space => O(1)

#include<bits/stdc++.h>
using namespace std;


// bring numbers to their indexes
// 8 4 3 7 11 9 2 6 1   to, take 8 to its index, swap 6 and 8
// 6 4 3 7 11 9 2 8 1   as 1 is still not at 1st position, i--
// do it again until 1 does not come at 1st position

int firstMissing(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]>0 && arr[i]<=n){
            int index=arr[i]-1;
            if(arr[index]!=arr[i]){
                swap(arr[i],arr[index]);
                i--;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            return i+1;
        }
    }
    return n+1;
}

int main(){
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    cout<<firstMissing(arr,a);
}
