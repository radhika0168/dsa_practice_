#include<iostream>
using namespace std;
void bin(unsigned num){
    for(int i=10;i>=0;i--){
        cout<<((num>>i)& 1);
    }
    cout<<endl;
}

int main(){

    // coversion of capital letter to small letter
    char ch = 'A'|(1<<5);
    cout<<ch<<"\n";

    char ch1 = 'A'|'_';
    cout<<ch1<<"\n";

    char ch2 = 'a'&(~(1<<5));
    cout<<ch2<<"\n";

    cout<<char('c'&'_')<<"\n";
    cout<<char('C'|' ')<<"\n";
    return 0;
}