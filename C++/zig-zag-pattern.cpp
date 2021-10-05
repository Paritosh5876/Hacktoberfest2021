#include <bits/stdc++.h> 
//    *   *   *
     * * * * * *
    *   *   *   *
    pattern for n==13  //
    
      
int main(){
  int length;
  cin>>length;             
  
  for(int i=1;i<=3;i++){
    for(int j=1;j<=length;j++){
      if((i+j)%4==0||((i==2)&&(j%4==0))){
        cout<<"* ";}
      else
        cout<<" ";
    }
    cout<<endl;
  }  
      
      return 0;
}         
