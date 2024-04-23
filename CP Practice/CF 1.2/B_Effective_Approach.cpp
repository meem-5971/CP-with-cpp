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
   map<int,int>mp;
   for(int i=0;i<t;i++){
     int x;
     cin>>x;
     mp[x]=i;
   }
   int q;
   cin>>q;
   ll f=0,l=0;
   while(q--){
    int x;
    cin>>x;
    f+=mp[x]+1;
    l+=t-mp[x];

   }
   cout<<f<<' '<<l<<'\n';
    return 0;
}