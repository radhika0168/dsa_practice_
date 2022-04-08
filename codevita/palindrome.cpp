#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s = " ";
    cin>>s;
    int palindrome_size;
    cin>>palindrome_size;
    int arr[palindrome_size];
    for(int i=0;i<palindrome_size;i++){
        cin>>arr[i];
    }
    map<int,vector<pair<int,int>>>m;
    // cout<<go(n,s,palindrome_size,arr,dp,0);

    // storing 1 size palindrome
    for(int i=0;i<n;i++){
        m[1].push_back({i,i});
    }

    // storing 2 size palindrome
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            m[2].push_back({i,i+1});
        }
    }

    // now checking for other sizes....possible palindrome..
    for(int i=3;i<=n;i++){
        if(m[i-2].size()){
            for(auto element: m[i-2]){
                int left_index = (element.first )-1;
                int right_index = (element.second) +1;
                if(left_index>=0 and right_index<=n and s[left_index]==s[right_index]){
                    m[i].push_back({left_index,right_index});
                }
            }
        }
    }

    int total_palindrome=0;
    for(int i=0;i<palindrome_size;i++){
        total_palindrome += m[arr[i]].size();
    }
    cout<<total_palindrome<<endl;
    return 0;
}