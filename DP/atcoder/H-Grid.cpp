#include <bits/stdc++.h>

using namespace std;
long long M=1e9+7;

void dfs(vector<vector<char>> &v,long long x,long long y,vector<vector<bool>> &vis,long long i,long long j,long long &count){
    
    if(i<0 || j<0 || i>=x || j>=y ||vis[i][j]==true || v[i][j]=='#')return;
    
    if(i==x-1 and j==y-1){
        (count++)%M;
        return;
    }
    
    vis[i][j]=true;
    dfs(v,x,y,vis,i+1,j,count);
    dfs(v,x,y,vis,i,j+1,count);
    vis[i][j]=false;
}

int main() {
    long long h,w;
    cin>>h>>w;
    vector<vector<char>> v(h,vector<char>(w));
    for(long long i=0;i<h;i++){
        for(long long j=0;j<w;j++){
            cin>>v[i][j];
        }
    }
    vector<vector<bool>> vis(h,vector<bool>(w,false));
    long long c=0%M;
    dfs(v,h,w,vis,0,0,c);
    cout<<c%M;
    return 0;
}