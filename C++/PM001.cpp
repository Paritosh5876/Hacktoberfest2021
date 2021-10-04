#include<bits/stdc++.h>
using namespace std;
int main()
{
    //to find the longest increasing subsequence in an array of integers
    // LOGIC -: What we will do is we will make a loop to search for the numbers where the next number is greater than the previous one, and whenever it fails, we would check if it has greater length than the previous one, and change the value of answer accordingly

    long long n;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    long long a[n];
    cout<<"Enter the elemnets of the array of size "<<n<<" by giving spaces in between : "<<endl;
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long ans=0,len=1;
    for(long long i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1]) len++;
        else{
            ans=max(len,ans);
            len=1;
        }
    }
    ans=max(ans,len);
    cout<<"The length of the longest increasing subsequence in the given array is : "<<ans;
}