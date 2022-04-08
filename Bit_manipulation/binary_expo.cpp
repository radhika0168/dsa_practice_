#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;

// using recursion ..........................................
// int binaryexpo(int num, int pow){
//     if(pow==0) return 1;
//     long long ans = binaryexpo(num,pow/2);
//     if(pow&1){
//         return (num*((ans*ans)%M))%M;
//     }
//     else return ((ans*ans)%M);
// }

// using bit manipulation.........................................
// int binaryexpo(int num, int pow){
//     if(pow==0) return 1;
//     long long ans=1;
//     while(pow){
//         if(pow&1){
//             ans = (ans*num);
//         }
//         num = num*num;
//         pow>>=1;
//     }
//     return ans;
// }

//without using * operator ....... 
int binmul(long long num1,long long num2){
    int ans = 0;
    while(num2>0){
        if(num2&1){
            ans = (ans+num1)%M;
        }
        num1 = (num1+num1)%M;
        num2>>=1;
    }
    return ans;
}
int binaryexpo(int num, int pow){
    if(pow==0) return 1;
    long long ans=1;
    while(pow){
        if(pow&1){
            ans = binmul(ans,num);
        }
        num = binmul(num,num);
        pow>>=1;
    }
    return ans;
}

int main(){
    int num,pow;
    cin>>num>>pow;
    cout<<binaryexpo(num,pow);
    return 0;
}