#include<iostream>
using namespace std;

int profit(int N, int C,int w[],int v[]){
    if(N==0 or C==0){
        return 0;
    }
    // int ans;
    // int inc=0,exc=0;
    // if(w[N-1]<=C){
    //     inc = max(inc,(v[N-1]+ profit(N-1,C-w[N-1],w,v)));
    // }
    // else exc = profit(N-1,C,w,v);
    // ans  = max(inc,exc);
    // return ans;
    if(w[N-1]<=C){
        return max((v[N-1]+profit(N-1,C-w[N-1],w,v)),profit(N-1,C,w,v));
    }
    else return profit(N-1,C,w,v);
}

int main(){
    int w[] = {1,2,3,5};
    int v[] = {40,10,30,100};
    int N = 4;
    int C = 7;
    int p=profit(N,C,w,v);
    cout<<p;
    return 0;
}