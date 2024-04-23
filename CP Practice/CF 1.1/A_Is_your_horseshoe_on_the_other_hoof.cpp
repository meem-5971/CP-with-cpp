#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   set<ll>s;
   for(int i=0;i<4;i++){
    ll x;
    cin>>x;
    s.insert(x);
   }
   cout<<4-s.size()<<'\n';
    return 0;
}