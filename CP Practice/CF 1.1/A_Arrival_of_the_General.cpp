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
   ll l=INT_MIN,r=INT_MAX;
   ll mn=INT_MAX,mx=INT_MIN;
   for(ll i=0;i<n;i++){
    cin>>a[i];
    if(a[i]<=mn){
        mn=a[i];
        r=i;

    }
    if(a[i]>mx){
        mx=a[i];
        l=i;
    }
   }
  ll d=n-1;
  // cout<<mx<<' '<<mn;
 if(l>r){
    cout<<l-1+(n-r)-1<<'\n';
 }
 
 else{
    cout<<l-1+n-r<<'\n';
 }
    return 0;
}