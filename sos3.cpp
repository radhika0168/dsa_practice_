// 1!/2 + 2!/3 + 3!/4 + 4!/5 + ---------

#include<iostream>
using namespace std;

int sumseries(int n, int &f){
    if(n==0){
        return 0;
    }
    int smallsum = sumseries(n-1,f);
    f = f*n;
    return smallsum + f/(n+1.0);
}

int main(){
    int n;
    cin>>n;
    int p=1;
    cout<<sumseries(n,p);
    return 0;
}