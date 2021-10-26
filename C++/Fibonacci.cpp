#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n<2){
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int a;
    cout<<"Enter a number:";
    cin>>a;
    cout<<"The term in fibonacci sequence at position "<< a <<" is "<< fibonacci(a);

    return 0;
}