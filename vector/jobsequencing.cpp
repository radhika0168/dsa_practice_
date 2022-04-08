#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    vector<pair<int,int>>v;
    
    for(int i=0;i<n;i++){
        v.push_back({a[i],b[i]});
    }
    
    sort(v.begin(), v.end());
    int start,end,count=0;
    bool flag=true;
    for(int i=0;i<n;i++){
        if(v[i].first<=v[i].second and flag){
            start=v[i].first;
            end = v[i].second;
            count++;
            flag=false;
        }
        else{
            if(start==v[i].first){
                count++;
                end = min(end,v[i].second);
            }
            else{
                if(v[i].first>=end){
                    count++;
                    end=v[i].second;
                }
            }
        }
    }
    cout<<count<<endl;

    return 0;
}