#include<bits/stdc++.h>
using namespace std;

int go(int n, int k, int height[], vector<int>dp, int step, int start){
    if(n==0){
        return 0;
    }
    if(dp[start]!=-1){
        return dp[start];
    }

    

}

int main(){
    int n,k;
    cin>>n>k;
    int height[n];
    for(int i=0;i<n;i++){
        cin>>height[i];
    }
    // dp to store minimum cost upto nth jump
    vector<int>dp(n+1,-1);
    cout<<go(n,k,height,dp,0);
    return 0;
}