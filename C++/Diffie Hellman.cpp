//The Diffie-Hellman algorithm is being used to establish a shared secret
//that can be used for secret communications while exchanging data over a
//public network using the elliptic curve to generate points and get the secret key using the parameters

#include <iostream>
#include <vector>

using namespace std;
//OTP generating system for ATM machine
int main()
{
    int n,p;
    cout<<"Elliptical Curve General Form y^2 mod p = (x^3 + Ax + B) mod p / n ";
    cout<<"Enter the value of P: \n";
    cin>>p;
    n=p;
    int LHS[2][n], RHS[2][n], a,b,i,j;
    cout<<"\nEnter the Value of a: \n";
    cin>>a;
    cout<<"\nEnter the Value of b: \n";
    cin>>b;
    cout<<"\nCurrent Elliptic Curve \t\t ----> y^2 mod "<<p<<"= (x^3 + "<<a<<"x + "<<a<<") mod "<<p<<"\n\n";
    
    
    for(int i=0;i<n;i++)
    {
        LHS[0][i] = i;
        RHS[0][i] = i;
        LHS[1][i] = ((i*i*i)+a*i+b)%p;
        RHS[1][i] = (i*i) % p;
    }
    
    int c = 0;
    vector<int> arr_x,arr_y;
    for(i =0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(LHS[1][i] == RHS[i][j])
            {
                c++;
                arr_x.push_back(LHS[0][i]);
                arr_y.push_back(RHS[0][j]);
                
            }
        }
    }
        
    cout<<endl<<"Generated Points are:"<<endl;
    for(int i=0; i<c; i++)
    {
        cout<<i+1<<"\t("<<arr_x[i]<<","<<arr_y[i]<<")"<<endl;
    }
    cout<<"Base Point: ("<<arr_x[0]<<","<<arr_y[0]<<")"<<endl;
    int k,d,m;
    cout<<"Enter the random number 'd' i.e. private key of sender (d/n) \n";
    cin>>d;
    int qx = d*arr_x[0];
    int qy = d*arr_y[0];
    //q is the public key of sender
    //Encryption before sending otp to user
    cout<<" \n Encryption Before sending otp to user";
    cout<<"\nEnter the random number 'k' (k<n) \n";
    cin>>k;
    cout<<"Enter the Amount to be withdrawn:\n";
    cin>>m;
   
    int c1x = k*arr_x[0];
    int c1y = k*arr_y[0];
    cout<<"Value of c1: ("<<c1x<<","<<c1y<<")"<<"\n";
    int c2x = k*qx+m;
    int c2y = k*qy+m;
    cout<<"Value of c2: ("<<c2x<<","<<c2y<<")"<<"\n";
    cout<<"OTP for the transaction is c1x c1y c2x c2y: ";
    if(c1x<10)
      cout<<"0"<<c1x;
    else
      cout<<c1x;
    if(c1y<10)
      cout<<"0"<<c1y;
    else
      cout<<c1y;
    if(c2x<10)
      cout<<"0"<<c2x;
    else
      cout<<c2x;
    if(c2y<10)
      cout<<"0"<<c2y;
    else
      cout<<c2y;  
    cout<<"\n\n Decryption on Bank Server Side";

    




//DECRYPTION (Bank Server)
    cout<<"\n\n Enter the OTP:  ";       
    int otp;
    cin>>otp;
    int cipher[4];
    for(int i=0;i<4;i++)
      {cipher[i] = otp%100;
      otp=otp/100;}
    cout<<"\n The Amount received is:\n";
    int Mx = cipher[1]-d*cipher[3];
    int My = cipher[0]-d*cipher[2];
    cout<<Mx<<"\n";
    
    return 0;
}

