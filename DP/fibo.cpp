#include<iostream>
using namespace std;

// top down approach
int fiboTop(int n,int dp[]){
    if(n==0 or n==1){
        return n;
    }
    
    if(dp[n]!=0){
        return dp[n];
    }

    int ans;
    ans = fiboTop(n-1,dp)+fiboTop(n-2,dp);
    return dp[n] = ans;
}

int fibo_bottom_up(int n,int dp[]){
    
    dp[1] = 1;

    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int fiboOpt(int n){
    int a = 0, b=1,c;
    for(int i=2;i<=n;i++){
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main(){
    int n;
    cin>>n;
    int dp[n]={0};
    // cout<<fibo_bottom_up(n,dp)<<endl;
    cout<<fiboOpt(n)<<endl;
    return 0;
}

// 0 1 2 3 4 5 6 7 
// 0 1 1 2 3 5 8 13 21
