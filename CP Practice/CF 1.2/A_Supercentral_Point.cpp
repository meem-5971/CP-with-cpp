#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  int t;
  
  while(cin>>t){
    int x[t+1],y[t+1];
    for(int i=0;i<t;i++){
        cin>>x[i]>>y[i];
    }
    int ans=0;
    int l,r,d,u,a,b;
    for(int i=0;i<t;i++){
     l=r=u=d=0;
     a=x[i],b=y[i];
     for(int j=0;j<t;j++){
      if(x[j]==a){
        if(y[j]>b) u++;
        if(y[j]<b) d++;
      }
      if(y[j]==b){
        if(x[j]>a) l++;
        if(x[j]<a) r++;
      }
     }
     if(l>0 && r>0 && u>0 && d>0) ans++;
    }
    cout<<ans<<'\n';
  } 
    return 0;
}