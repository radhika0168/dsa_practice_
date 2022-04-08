#include<bits/stdc++.h>
using namespace std;

void generate_bracket(char *out, int n, int index, int open, int close){

    if(index==2*n){
        out[index] = '\0';
        cout<< out<<endl;
        return;
    }

    if(open<n){
        out[index] = '(';
        generate_bracket(out,n,index+1,open+1,close);
    }
    
    if(close<open){
        out[index] = ')';
        generate_bracket(out,n,index+1,open,close+1);
    }
    return;
}

int main(){
    int n;
    cin>>n;

    char out[1000];
    int idx = 0;
    generate_bracket(out,n,idx,0,0);
    return 0;
}