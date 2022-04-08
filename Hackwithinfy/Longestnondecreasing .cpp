#include <bits/stdc++.h>
using namespace std;

int solve( string s, int k, int index, int n, int& count,sum){
	if(index>=n){
		return 0;
	}
	for(int i=index;i<n;i++){
		if(s[i]%6==0){
			count++;
		}
		count+=solve(s,k,i+1,n,count,sum)
	}
}

int lis(string s, int k)
{	
	int n=s.size();
	int dp[2*n] = {0};
	dp[0] = s[0];
	int count=0;
	solve(s,k,0,dp,n,count,0)
	
}

/* Driver program to test above function */
int main()
{
	string str=" ";
	cin>>str;
    int k;
    cin>>k;
	int s = s.size();	

}

/* This code is contributed by Arun Bang */
