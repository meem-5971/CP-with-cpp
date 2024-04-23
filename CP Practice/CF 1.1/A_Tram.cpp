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
   int sum=0;
   int ans=INT_MIN;

   while(t--){
    int x,y;
   cin>>x>>y;
      sum-=x;
      sum+=y;
      ans=max(ans,sum);
    
   }
   cout<<ans<<'\n';
    return 0;
}