#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n: "; 
    cin>>n;
    // if n is 10 -> (10*(10+1)/2) = 55
    int sum = (n*(n+1)/2); 
    cout<<sum;
    return 0;
}
