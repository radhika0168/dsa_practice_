// 1/1! + (1+2)/2! + (1+2+3)/3! + (1+2+3+4)/4!-----------(1+2+---n)/n!...........upper part sum will be equal to
//  ...(n(n+1))/2.0.....hence we can say ......
#include<iostream>
using namespace std;
float sum(int n, int &f, int &initial_sum){
    if(n==0){
        return 0;
    }
    float smallsum = sum(n-1,f,initial_sum);
    initial_sum = initial_sum+n;
    f = f*n;
    // return smallsum+ (((n*(n+1))/2.0)/f);
    return smallsum + ((initial_sum + 0.0)/f);
}

int main(){
    int n;
    cin>>n;
    int f=1;
    int s = 0;
    cout<<sum(n,f,s);
    return 0;
}