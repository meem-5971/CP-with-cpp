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
   ll x1=0,x0=0,y1=0,y0=0;
   while(t--){
    ll x,y;
    cin>>x>>y;
     if(x==0){
        x0++;
     }
     if(x==1){
        x1++;
     }
     if(y==0){
        y0++;
     }
     if(y==1){
        y1++;
     }
   }
   ll q=min(x0,x1);
  // cout<<q<<' ';
   q += min(y0,y1);
   cout<<q<<'\n';
    return 0;
}