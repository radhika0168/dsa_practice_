#include<iostream>
using namespace std;


int Gcd(int a, int b){
        if(b>a){
            swap(a,b);
        }
        if(b==0){
        return a;
        }
    return Gcd(a%b, b);
}


int main(){
  
    int a,b;
    cin>>a>>b;
    int ans =  Gcd(a,b);
    cout<<ans;
    return 0;
}