#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  string s;
  cin>>s;
  bool flag=false;
  for(int i=0;i<s.size();i++){
    if (s[i]=='H' || s[i]=='Q' || s[i]=='9'){
       flag=true;
       break;
    }
  } 
  if (flag){
    cout<<"YES"<<'\n';
  }
  else{
    cout<<"NO"<<'\n';
  }
    return 0;
}