#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   ll t;
   cin>>t;
   string s=to_string(t);
 // cout<<s<<'\n';
  bool flag=true;
  ll cnt=0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='4' || s[i]=='7'){
       cnt++;
    }
   
  }
    if(cnt==4 || cnt==7) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
    return 0;
}