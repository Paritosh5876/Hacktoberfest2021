#include <iostream>
using namespace std;


int main(){ 

    int n;      
    cin>>n;                         //Input size of array    
    
    int array[n];
    for(int i=0; i<n; i++){         
        cin>>array[i];              // Input elements of array
    }
    
   for (int i = n - 1; i >= 0; i--){    //Reversing of element of array
        cout << array[i] << ' ';
    }
    return 0;
}