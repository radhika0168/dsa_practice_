// check ith bit is set or not 
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
    int i;
    cin>>i;
    bin(n);
    ((n&(1<<i))!=0)?cout<<"\nset_bit":cout<<"\nunset_bit";
    // if((n&(1<<i))!=0){
    //     cout<<"\nSet Bit";
    // }
    // else cout<<"\nUnset Bit";
    cout<<"\nconversion of ith bit to unset bit : ";
    bin(n&(~(1<<i)));
    return 0;
}
