#include<iostream>
using namespace std;

void pattern(int i, int n){
    if(i==0){
        return;
    }
    pattern(i-1,n);
    for(int space=0;space<n-i;space++){
        cout<<" ";
    }
    for(int star=i;star>0;star--){
        cout<<"*";
    }
    cout<<"\n";
}
int main(){
    int n;
    cin>>n;
    pattern(n,n);
    return 0;
}
