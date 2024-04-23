#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   ll n; double m;
   cin>>n>>m;
   vector<ll>a(n);
   for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]<=m){
        a[i]=0;
    }
   }
   double rem=0,ans=0;
   for(int i=0;i<n;i++){
    if(ceil(a[i]/m)>=rem){
        rem=ceil(a[i]/m);
        ans=i;
    }
   }
  cout<<ans+1<<'\n';

    return 0;
}