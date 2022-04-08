#include<bits/stdc++.h>
using namespace std;

void go(vector<int>& v, int i, vector<int>& cur,vector<int>& allsubset){
    if(i<0){
        allsubset.push_back(cur);
        return;
    }
    go(v,i-1,cur,allsubset);
    cur.push_back(v[i]);
    go(v,i-1,cur,allsubset);
}
int main(){
    vector<int> v = {1,2,3};
    vector<int> cur;
    vector<vector<int>> allsubset;
    go(v,v.size()-1,cur,allsubset);

    for(auto subset: allsubset){
        for(auto x: subset){
            cout<<x;
        }
        cout<<"\n";
    }
    return 0;
}