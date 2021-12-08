// check if no. of pairs are equal...i.e. 
// }(()){ should print yes ....{([)} should print no 
#include<bits/stdc++.h>
using namespace std;
unordered_map<char,int> symbols = {{'[',-1} ,{'{',-2}, {'(',-3}, {']',1}, {'}',2}, {')',3}};
string isbalance( string a){
    stack<char> st;
    for(char bracket: a){
        if(!st.empty()){
            char top = st.top();
            if(symbols[top]+symbols[bracket]==0){
                st.pop();
                continue;
            }
        }
        st.push(bracket);
    }

    return (st.empty()==true)?"yes":"false";
} 

int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        cout<<isbalance(a)<<" "<<endl;

    }
    return 0;
}