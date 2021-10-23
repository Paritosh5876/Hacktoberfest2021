#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int a[r][c];
    int transpose[r][c];
    int i,j;
    //storing matrix elements 
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    // printing matrix 
    cout<<"MATRIX"<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<" "<<a[i][j];
            if(j==c-1){
                cout<<endl<<endl;
            }
        }
    }
    // calculating transpose
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            transpose[j][i]=a[i][j];
        }
    }
    // printing transpose of matrix
    cout<<"TRANSPOSE"<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout << " " << transpose[i][j];
            if (j == r-1)
            cout << endl << endl;
        }  
    }
    return 0;
}