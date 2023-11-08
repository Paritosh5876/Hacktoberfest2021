#include<bits/stdc++.h>
using namespace std;


int minCut(string s) {
        int n=s.length();
        vector<vector<int> > arr(n,vector<int>(n,0));
        
        for(int i=0;i<n;i++){
            arr[i][i]=1;
        }
        
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(s[i]==s[j]){
                      if((i-j)==1 || arr[j+1][i-1]){
                          arr[j][i]=1;
                      }                    
                }
            }
        }
 
         
        int ar[n];
        ar[0]=0;
        
        for(int i=1;i<n;i++){
            int temp=INT_MAX;
             if(arr[0][i]){
                ar[i]=0;
                continue;
            }
            for(int j=0;j<i;j++){                 
               if(arr[j+1][i] && temp>ar[j]+1){
                    temp=ar[j]+1;
               }
               
            }
            
            ar[i]=temp;
            
        }
        
        return ar[n-1];
        
}

int main(){
	string str = "abbab";
	cout<<minCut(str);
}
