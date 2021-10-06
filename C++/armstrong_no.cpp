#include<iostream>
#include<math.h>
using namespace std;

int main(){
    cout<<"ENTER A NUMBER:";
    int n;
    cin>>n;
    int sum=0;
    int originaln=n;
    while(n>0){
        int lastdigit=n%10;           //find last digit by modulus
        int cube=pow(lastdigit,3);     //its determine the cube of a no
        sum+=cube;
        n=n/10;
    }
    if(sum==originaln){
        cout<<"ITS A ARMSTRONG NUMBER!"<<endl;

    }
    else{
        cout<<"ITS NOT A ARMSTRONG NUMBER"<<endl;

    }


    return 0; 
}