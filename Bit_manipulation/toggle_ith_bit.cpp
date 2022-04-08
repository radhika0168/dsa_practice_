#include<iostream>
using namespace std;
void bin(unsigned n){
    if(n>1){
        bin(n/2);
    }
    cout<<n%2;
}
int main(){
    int n,i;
    cin>>n>>i;
    bin(n);
    cout<<"\n";
    bin(n^(1<<i));
    return 0;
}