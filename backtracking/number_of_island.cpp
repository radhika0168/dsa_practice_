#include<bits/stdc++.h>
using namespace std;

void number(vector<vector<int>>& grid,vector<vector<int>>& v, int i, int j, int n, int m, int count){
    if(i<0 or i==n or j<0 or j==m or v[i][j]==1 or grid[i][j]==0) return;

    grid[i][j] = count;
    v[i][j] = 1;
    number(grid,v,i+1,j,n,m,count);
    number(grid,v,i,j-1,n,m,count);
    number(grid,v,i,j+1,n,m,count);
    number(grid,v,i-1,j,n,m,count);

}

int islands(vector<vector<int>>& grid,int n,int m){
    int count=0;
    vector<vector<int>>v(n,vector<int>(m,0));
    // memset(v,0,sizeof(v));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==1 and v[i][j]!=1){
                count++;
                number(grid,v,i,j,n,m,count);
            }
        }
    }
    return count;
}

int main(){
    // vector<vector<int>>grid;
    int n,m;
    cin>>n>>m;
    vector<vector<int>>grid(n,vector<int>(m,0));
    cout<<"enter value of grid: \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }
    int count = islands(grid,n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n"<<"number of islands: "<<count;
    return 0;
}