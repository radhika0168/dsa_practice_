#include<bits/stdc++.h>
using namespace std;

void recur(int start, int end, int *size){

}

void pattern_determine( int n, int x){
    vector<int> v;
    int start = 1,end=x,size = n;
   while(end<x+1){
       recur(start,end,&size);
   }
}

int main(){
    int n,x;
    cin>>n>>x;
     pattern_determine(n,x);
    return 0;
}
