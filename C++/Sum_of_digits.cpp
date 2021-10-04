#include<iostream>

using namespace std;


int N
{
    int sum = 0;
    while(N>0)
    {
        int unitDigit = N%10;
        sum += unitDigit;
        N/=10;
    }
    return sum;
}
int main()
{
    int N;
    cout<<"Enter the value of N: ";
    cin>>N;
    cout<<"Sum of digits is "<<N;
    return 0;

}
