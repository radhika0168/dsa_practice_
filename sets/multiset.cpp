#include<bits/stdc++.h>
using namespace std;

int main(){
    multiset<int> s;
    s.insert(5);
    s.insert(9);
    s.insert(1);
    s.insert(100);
    s.insert(3);
    s.insert(5);
    s.insert(3);
    // cout<<s.size()<<"\n";
    s.erase(s.begin());
    s.erase(*(s.begin));
    cout<<*(s.begin())<<"\n";
    for(int x: s){
        cout<<x<<" ";
    }
    cout<<"\n";
    return 0;
}




