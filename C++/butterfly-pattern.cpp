#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    //UPPER-HALF;
    for(int i=1;i<=n;i++)    
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";                                                      //upper-left-half side    
        }
        int space=2*n - 2*i;
        for(int j=1;j<=space;j++)                                           
        {
            cout<<" ";                                                            //middle space
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";                                                               //upper-right half side
        }
        cout<<endl;
    }



    //LOWER-HALF;
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";                                                      //lower-left half side
        }
        int space=2*n - 2*i;
        for(int j=1;j<=space;j++)
        {
            cout<<" ";                                                          //middle space
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";                                                          //lower-right half side
        }
        cout<<endl;
    }
    
    return 0;
}