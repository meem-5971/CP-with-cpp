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
   vector<ll>a(n);
   map<ll,ll>mp;
   for(int i=0;i<n;i++){
    cin>>a[i];
    mp[a[i]]++;
   }
   ll x=*min_element(a.begin(),a.end());
   if(mp[x]!=1){
    cout<<"Still Rozdil"<<'\n';
   }
   else{
    for(int i=0;i<n;i++){
    if(a[i]==x){
        cout<<i+1<<'\n';
        break;
    }
   }
   }
    return 0;
}