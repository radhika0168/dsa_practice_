// 1+2+3+4+5+6+7-----n
#include<iostream>
using namespace std;
int sumseries(int n, int *arr){
    if(n==0){
        return 0;
    }
    // cout<<sumseries(n-1,arr)+arr[n-1]<<" ";
    return sumseries(n-1,arr)+ arr[n-1];

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\n"<<sumseries(n,arr);
    return 0;
}