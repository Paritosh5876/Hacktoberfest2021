#include<iostream>

using namespace std;

//sum
int sum_of_digits(int N)
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

//main
int main()
{
    int N;
    cout<<"Enter the value of N: ";
    cin>>N;
    cout<<"Sum of digits is "<<sum_of_digits(N);
    return 0;

}
