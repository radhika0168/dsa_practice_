#include<iostream>
using namespace std;
// spell the given number

char word[][10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

void spell(int n){
    if(n==0){
        return;
    }
     spell(n/10);
     int digit  = n%10;
     cout<<word[digit]<<" ";

}

int main(){
    int n;
    cin>>n;
    spell(n);
    return 0;
}