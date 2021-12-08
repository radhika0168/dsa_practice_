#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int size=1;size<=n;size++){
        for(int start=0;start<n-size+1;start++){
            for(int index=start;index<start+size;index++){
                cout<<arr[index]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}