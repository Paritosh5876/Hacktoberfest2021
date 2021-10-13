#include<bits/stdc++.h>
using namespace std ;

/*
    Multiplication of n polynomial Equation with same variable

    Input Format:
        int n (number of polynomial Equation)
        provide 2 lines n times (First line contains degree of ith polynomial+1 , second line contains coefficent of ith polynomial with first element as x^0th coeff, x^1th coeff, x^2th coeff,....)

	For Example : 
		2 (I want to multiply 2 polynimal Eqn)
		3 (degree of 1st polynomial Eqn + 1)
		2 1 1 ( 2->x^0th coeff , 1->x^0th coeff , 1->x^0th coeff )  
		3 (degree of 2nd polynomial Eqn + 1)
		3 2 1 ( 3->x^0th coeff , 2->x^0th coeff , 1->x^0th coeff ) 
		
		( x^2 + x + 2 )*( x^2 + 2x + 3) = x^4 + 3x^3 + 7x^2 + 7x + 6
										=  6 + 7x + 7x^2 +3x^3 + x^4
		
		Output : (coefficients of final Equations)
			6 7 7 3 4   [starts with coefficient of x^0, followed by coefficient of x^1, coefficient of x^2 .......  ]
				       
*/

int main(){

    int n ;
    cin>>n ;
    vector<int> v[n];
    for(int i=0 ; i<n ; i++){
        int x ;
        cin>>x ;
        v[i].resize(x) ;
        for(int j=0 ; j<x ; j++)
          cin>>v[i][j] ;
    }
    vector<int> ans(v[0].size()+v[1].size()-1,0) ;
    for(int i=0 ; i<v[0].size() ; i++){
        for(int j=0 ; j<v[1].size() ; j++)
            ans[i+j]+=v[0][i]*v[1][j] ;
    }
    for(int k=2 ; k<n ; k++){
        vector<int> tmp(ans.size()+v[k].size()-1,0) ;
        for(int i=0 ; i<ans.size() ; i++){
            for(int j=0 ; j<v[k].size() ; j++)
              tmp[i+j]+=ans[i]*v[k][j] ;
        }
        ans.resize(tmp.size()) ;
        for(int i=0 ; i<tmp.size() ; i++)
            ans[i]=tmp[i] ;
    }

    for(auto i : ans)
   		cout<<i<<" " ;
    
    return 0 ;
}
