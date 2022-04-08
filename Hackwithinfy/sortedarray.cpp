#include<bits/sdtc++.h>
using namespace std;



int solve(int N, int arr[], int count){
    if(N==0 or N==1) return 0;

    stack<int>s;
    queue<int>q;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>=arr[i-1]){
            s.push(arr[i]);
        }
        else{
            
        }
    }
}

int main(){

    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int count=0;
    solve(N,arr,count);
    cout<<count<<endl;
    return 0;
}