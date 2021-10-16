/*
This algorithm helps to find number of set bits in a number in O(logN) time complexity

Set bits is the 1's we get in the binary representation of the number N

For example: 
N = 4;
Binary Representation: 100
No of set bit = 1
*/
#include<bits/stdc++.h>

using namespace std;

//Utility Function to get number of set bits
int brian_kernighans_algorithm(int N) {

    int cnt =0;

    while(N)
    {
        N= N & (N-1);
        cnt++;
    }

    return cnt;
}

//Driver Code
int main() {

    int N;
    cin>>N;

    int set_bits = brian_kernighans_algorithm(N);

    cout<<"No. of set bits in "<< N << " is "<< set_bits;

    return 0;

}