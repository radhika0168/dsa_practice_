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
    // cin>>n;
    int a = 9 or 9 or 5;
    cout<<a<<"\n";
    bin(a);
    return 0;
}