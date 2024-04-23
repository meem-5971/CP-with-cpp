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
    string s;
    cin>>s;
    if(s.size()<=10){
        cout<<s<<'\n';
    }
    else{
        cout<<s[0]<<s.size()-2<<s[s.size()-1]<<'\n';
    }
  } 
    return 0;
}