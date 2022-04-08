#include<iostream>
using namespace std;
void bin(unsigned num){
    for(int i=10;i>=0;i--){
        cout<<((num>>i)& 1);
    }
    cout<<endl;
}
int main(){
    // we want to unset the bits upto ith term in LSB
    int a=59,i;
    bin(a);
    cin>>i;
    int z = ~((1<<i)-1);
    bin(z);
    int b = a&z;
    bin(b);

    // we want to change the MSB bits 
    cout<<"MSB change : \n";
    int m = a&((1<<i)-1);
    bin(m);
    return 0;
}