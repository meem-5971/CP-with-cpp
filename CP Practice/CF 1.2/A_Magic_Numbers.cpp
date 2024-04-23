#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  ll n;
  cin>>n;
  string s= to_string(n);
  ll m=s.size();
  bool flag=true;
  for(int i=0;i<s.size();i++){
    if(s[i]!='1' && s[i]!='4' ){
       
            flag=false;
            break;
    }
     if(s[0]=='4'){
        
            flag=false;
            break;
        
    }
    if(s.find("444")!=s.npos){
            flag=false;
            break;
        }
  } 
  if (flag) cout<<"YES"<<'\n';
  else cout<<"NO"<<'\n';
    return 0;
}