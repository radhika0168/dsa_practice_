#include<iostream>
using namespace std;

void bin(unsigned n){
    if(n>1){
        bin(n/2);
    }
    cout<<n%2;
}
int main(){
    int n;
    cin>>n;
    bin(n);
    int count=0;
    // for(int i=31;i>=0;--i){
    //     if((n&(1<<i))!=0){
    //         count++;
    //     }
    // }
    // cout<<"\n"<<count;

    // another way of finding is ...
    while(n){
        n = n&(n-1);
        count++;
        
    }
    cout<<"\n"<<count;
    return 0;
}