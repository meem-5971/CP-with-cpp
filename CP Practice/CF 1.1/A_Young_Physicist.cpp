#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int n;
   cin>>n;
   ll x,y,z;
    ll xsum=0,ysum=0,zsum=0;
  while(n--){
    
    cin>>x>>y>>z;
    xsum+=x;
    ysum+=y;
    zsum+=z;
    
  }
   if(xsum==0 && ysum==0 && zsum==0){
    cout<<"YES"<<'\n';
   }
   else{
    cout<<"NO"<<'\n';
   }
  
   
    return 0;
}