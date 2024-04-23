#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
 vector<ll>prime;
 for(int i=1;i<=15000;i++){
    int cnt=0;
    for(int j=2;j<=i/2;j++){
        if(i%j==0){
          cnt++;
          break;
        }
    }
    if(cnt==0 && i!=1){
        prime.push_back(i);
    }
 }
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    cout<<prime[n-1]<<'\n';
 }
    return 0;
}