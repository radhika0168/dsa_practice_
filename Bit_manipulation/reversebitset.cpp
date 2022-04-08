#include<bits/stdc++.h>
using namespace std;

void printbin(unsigned n){

    if(n>1){
        printbin(n/2);
    }    
    cout<<n%2;

    
    // for(int i=31;i>=0;i--){
    //     cout<<((n>>i)& 1);
    // }
    // cout<<endl;
}

int reversebin(int n){
    int result = 0;
    for(int i=0;i<32;i++){
        int lsb = n&1;
        int reverse = lsb<<(31-i);
        result = result|reverse;
        n>>=1;
    }
    return result;
}

int main(){

    int n;
    cin>>n;
    printbin(n);
    cout<<"\n";
    int ans = reversebin(n);
    printbin(ans);
    return 0;
}