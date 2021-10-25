#include<iostream>

using namespace std;

int main()
{
    int n,k;
    cout<<"Enter the value of n and k: ";
    cin>>n>>k;

    int temp=n;

    //using right shift operation
    n=n>>(k-1);
    if(n&1) cout<<"Yes kth bit is a set bit\n";
    else cout<<"No kth bit is not a set bit\n";

    n=temp;

    //using left shift operation

    int one=1;
    one=one<<(k=1);
    if(n&one!=0) cout<<"Yes kth bit is a set bit\n";
    else cout<<"No kth bit is not a set bit\n";

}