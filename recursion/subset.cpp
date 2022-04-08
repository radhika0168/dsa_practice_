#include<bits/stdc++.h>
using namespace std;

void generate_sub(char *in, char *out, int i, int j){
    if(in[i]== '\0'){
        out[j]= '\0';
        cout<<out<<"\n";                 
        return;                          
    }

     out[j] = in[i];
     generate_sub(in,out,i+1,j+1);
     generate_sub(in,out,i+1,j);
}

int main(){
    char input[] = "abc";
    char output[10];
    generate_sub(input,output,0,0)
    return 0;
}