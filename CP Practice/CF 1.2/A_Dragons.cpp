#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  ll s,n;
  cin>>s>>n;
  bool flag=true;
  pair<int,int>a[10000];
  for(int i=0;i<n;i++){
    ll x,y;
    cin>>x>>y;
    a[i].first=x;a[i].second=y;
  }
  sort(a,a+n);
  for(int i=0;i<n;i++){
    if(s<=a[i].first){
      flag=false;
      break;
    }
    else{
        s+=(a[i].second);
    }
  }
  if(flag) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
    return 0;
}