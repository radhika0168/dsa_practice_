#include<iostream>
using namespace std;
void bin(unsigned num){
    for(int i=10;i>=0;i--){
        cout<<((num>>i)& 1);
    }
    cout<<endl;
}
int main(){
    int a,b;
    // xor operations....
    cin>>a>>b;
    cout<<"a: ";
    bin(a);
    cout<<"b: ";
    bin(b);
    cout<<"xor c =: ";
    bin(a^b);
    int c = a^b;
    cout<<"c ^ b = a ";
    bin(c^b);
    cout<<"b^b: ";
    bin(b^b);

    return 0;
}