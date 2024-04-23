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
  map<string,int>mp;
  string a,b;
  while(t--){
   string s;
   cin>>s;
   mp[s]++;
   if(a.empty()) a=s;
   else if(b.empty() && s!=a) b=s;
  } 
  if(mp[a]>mp[b]) cout<<a<<'\n';
  else cout<<b<<'\n';
    return 0;
}