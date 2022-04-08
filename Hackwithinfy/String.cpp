#include<bits/stdc++.h>
using namespace std;

// given size of string n1,n2 and two string s1,s2 wwe have to make both string equal ....either we have to change a character of S1 to any other character 
// or we can remove a character of T either from its start or its end....
// find the minimum number of operation to make strings equal...

int solve(int N, int M, string S, string T){
    if(N==M){
        int i=0,count=0;
        while(i<N){

            if(S[i]!=T[i]){
                count++;
            }

            i++;
        }
        return count;
    }
    else if(M>N){
            int i=0,j=0,count=0;
            bool matchfound=false;

            while(i<M and j<M){
                if(S[j]!=T[i] and matchfound==false ){
                    count++;
                    i++;
                }
                else if(S[j]==T[i]){
                    matchfound= true;
                    i++;
                    j++;
                }
                else if(S[j]!=T[i] and matchfound){
                    count++;
                    i++;
                    j++;
                }
            }
            int left_operation = M-i;
            count+=left_operation;
            return count;
        }
    else if(N>M){
        int i=0,j=0,count=0;
        bool matchfound=false;

        while(i<N and j<M){
            if(S[i]!=T[j] and matchfound==false){
                count++;
            }
            else if(S[i]==T[j]){
                j++;
            }
            else if(S[i]!=T[j] and matchfound){
                j++;
                count++;
            }
            i++;
        }
        return count;
    }
    
    return 0;
}


int main(){
    int n1,n2;
    cin>>n1>>n2;
    string s1=" ", s2="";
    cin>>s1>>s2;
    int res = solve(n1,n2,s1,s2);
    cout<<res<<endl;
    return 0;
}