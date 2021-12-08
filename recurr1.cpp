#include<iostream>
using namespace std;
// it is taking time o(n)
// void reversearray(int n, int *arr){
//     if(n<0){
//         return;
//     }
//     cout<<arr[n]<<" ";
//     reversearray(n-1,arr);
// }

// it is taking time log(n)
void reversearray(int start,int end,int *arr){
    if(start>end){
        return;
    }
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    reversearray(++start,--end,arr);
}

void inputarray(int n, int *arr,int start){
    if(start==n){
        return;
    }
    cin>>arr[start];
    start++;
    inputarray(n,arr,start);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    int start=0;
    // for(int i=1;i<=n;i++){
    //     cin>>arr[i];
    // }
    inputarray(n,arr,start);
    // reversearray(n-1,arr);
    reversearray(0,n-1,arr);
    return 0;
}