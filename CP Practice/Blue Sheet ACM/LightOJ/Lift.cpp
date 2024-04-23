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
   for(int cs=1;cs<=t;cs++){
    int mp,lp;
    cin>>mp>>lp;
    int ans=19;
    if(mp<lp){
        ans+=(lp*4);
    }
    else if(mp>lp){
        ans+=(mp*4);
        ans+=((mp-lp)*4);
    }
    else{
        ans+=(mp*4);
    }
    cout<<"Case "<<cs<<": "<<ans<<'\n';

   }
    return 0;
}