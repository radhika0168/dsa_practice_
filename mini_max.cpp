#include<iostream>
using namespace std;
int min_max(int *arr, int s){
if(s==0){
    return arr[s];
}
int min = min_max(arr,s-1);
if(min<arr[s]){
    return min;
}
else{
    return arr[s];
}

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<min_max(arr,n-1);
    return 0;
}