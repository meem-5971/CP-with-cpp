#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  int t;
  cin>>t;
  int ans=0;
  while(t--){
  string s;
  cin>>s;
  if(s=="++X" || s=="X++"){
     ans++;
  }
  else{
    ans--;
  }
  } 
  cout<<ans<<'\n';
    return 0;
}