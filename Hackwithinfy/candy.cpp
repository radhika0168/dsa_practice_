#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
        if(b>a){
            swap(a,b);
        }
        if(b==0){
            return a;
        }
    return gcd(a%b, b);
}

int candyBuying(int N, int X, vector<int>arr){
    if(X==0 or N==0 or X==1){
        return 0;
    }

    int sum=0,count=0;
    int s = arr.size();

    for(int i=0;i<s;i++){
        sum+=arr[i]
        if(sum>X){
            return 0;
        }
    }
    sum=0;
    int first_candy_count = a[s-1]+a[s-2];

    for(int i=0;i<s;i++){
        if( a[i]>0 and a[i+1]>0 and gcd(a[i],a[i+1])==1 ){
            if(i==0){
                sum+=(first_candy_count*(i+1));
                count++
            }
            else{
                
            }
        }
        if(sum>=X){
            return count;
        }
    }

}



int main(){

    int N,M;
    cin>>N>>M;
    vector<int> arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    cout<<candyBuying(N,M,vector<int>arr);
    return 0;
}