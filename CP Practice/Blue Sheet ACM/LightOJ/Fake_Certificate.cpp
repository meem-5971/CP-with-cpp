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
  while(t--){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0,cnt=0,mcnt=0;
    for(int i=0;i<n;i++){
      if(s[i]=='1'){
        ans++;
        cnt=0;
      }
      else{
        cnt++;
        mcnt=max(mcnt,cnt);
      }
    //cout<<ans<<' '<<mcnt;  
    }
    ans+=mcnt;
    cout<<ans<<'\n';
  } 
    return 0;
}