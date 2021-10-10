//sum of n natural number.



#include<iostream>
using namespace std;
int Sum(int n){
    int summation=(n*(n+1))/2;
    // return summation;
    return Sum;     //both(sum/summation) return the same answers..
}

int main(){
    int a;
    cout<<"enter the number whose sum you want to find: ";
    cin >>a;
    int ans=Sum(a);
    cout<<ans<<endl;
    return 0;
}



