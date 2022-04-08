#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0,count=0;
    cin>>n;
    for(int i=1;i*i<n;i++){
        cout<<i<<"\t"<<n/i<<endl;
        count++;
        sum+=i;
        if((n/i)!=i){
            sum+=(n/i);
            count++;
        }
    }
    cout<<"count: "<<count<<"\tsum: "<<sum;
    return 0;
}