// 1/2+ 2/3 + 3/4 + 4/5 + .......i/i+1;
#include<iostream>
using namespace std;
float sum(int i){
    if(i==0){
        return 0;
    }
    return sum(i-1) + i/i+(1.0);
}

int main(){
    int n;
    cin>>n;
    cout<<sum(n)<<" ";
    return 0;
}