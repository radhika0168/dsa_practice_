#include<bits/stdc++.h>
using namespace std;

int recurse(vector<int>arr, int k, int n, int index, int choosen){
    if(choosen>=n){
        return choosen;
    }
    int select=0;
    int i=index;
    for(int i=index;i<n;i++){
        if(k<=0){
            break;
        }
        int cost = k-((n-i-1)*arr[i]);
        select += max(recurse(arr,cost,n,i+1,n-i), recurse(arr,k,n,i+1,choosen));
    }
    return select;
}

int solve(vector<int> arr, int k, int n){
    
    int choosen=0;
    int ans = recurse(arr,k,n,0,choosen);
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        arr.push_back(val);
    }
    int k;
    cin>>k;
    cout<<solve(arr, k, n)<<endl;

    return 0;
}