#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
    int dp[100010];
    dp[0]=0;
    dp[1]=1;
    for(int i=0;i<=100000 / 2; i++){
        
        dp[2 * i] = dp[i];
        dp[2 * i + 1] = dp[i] + dp[i + 1];
    }
int n;
while(1){
    cin>>n;
    if(n==0)
        break;
    
    int mx=0;
      for ( int i = 0; i <= n; i++ ) mx = max ( mx, dp[i]);

      cout<<mx<<endl;
}
return 0;
}