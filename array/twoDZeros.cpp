#include<iostream>
using namespace std;

void solve(int n1, int n2, int a[n1][n2]){

    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(a[i][j]==0){
                for(int j=0;j<n2;j++){
                    a[i][j]=0;
                }
            }
        }
    }

}

int main(){
    int n1,n2;
    cin>>n1>>n2;
    int a[n1][n2];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cin>>a[i][j];
        }
    }
    solve(n1,n2,a);
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cout<<a[i][j];
        }
    }
    return 0;
}