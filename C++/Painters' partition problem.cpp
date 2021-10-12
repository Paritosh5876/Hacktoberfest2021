#include <bits/stdc++.h>

#define MAX_N 50
#define MAX_K 30

using namespace std;

int T,N,K,length[MAX_N],partialSum[MAX_N]; // partialSum[i] = length[0]+...length[i]
int memo[MAX_N][MAX_K+1];


int dp(int n, int k){
   // min time to paint first {0..n} boards, using k painters
    if( memo[n][k]!=-1 ) return memo[n][k];

    int result = INT_MAX;

    for(int b=1;b<=n;b++){ 
        // iterating on all possible number of boards the k-th painter can paint
        result = min( result , max(dp(n-b,k-1),partialSum[n]-partialSum[n-b]) );
    }

    memo[n][k]=result;

    return result;
}


void initialize(int n, int k){
    for(int i=0;i<n;i++){
        for(int j=0;j<=k;j++){
            memo[i][j]=-1;
            if(j==1) memo[i][j] = partialSum[i];
            else if(i==0) memo[i][j] = length[0];
        }
    }
}

int main(){

    scanf("%d",&T);

    while(T--){
        scanf("%d %d",&K,&N);
        
        scanf("%d",&length[0]);
        partialSum[0]=length[0];

        for(int i=1;i<N;i++){
            scanf("%d",&length[i]);
            partialSum[i]=partialSum[i-1]+length[i];
        }

        initialize(N,K);

        printf("%d\n",dp(N-1,K));
    }

}
