#include<iostream>
using namespace std;


// void pattern_subpart(int i,int time){
//     if(i==0 || time==0){
//         return;
//     }
//     int x = i;
//     cout<<x<<"";
//     pattern_subpart(i,--time);
// }

// void pattern(int n,int start){
//     if(n==0){
//         cout<<0;
//         return;
//     }
//     // int start=1;
//     while(start<=n){
//         pattern_subpart(start,start);
//         start++;
//         cout<<" ";
//     }
// }

void pattern(int n){
    if(n==0){
        return;
    }
    pattern(n-1);
    for(int i=1;i<=n;i++){
        cout<<"*"<<"";
    }
    cout<<"\n";

}

int main(){
    int n;
    cin>>n;
    pattern(n);
    return 0;
}