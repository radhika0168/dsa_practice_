#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    vector<int>v;
    for(int i=0;i<n;i++){
        int el;
        cin>>el;
        v.push_back(el);    
    }
    sort(v.begin(),v.end());
    v.erase(v.begin()+n);
    int s = v.size();
    for(int i=0;i<s;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}