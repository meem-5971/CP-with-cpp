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
   vector<int>a(12);
   int t=0;
   for(int i=0;i<12;i++){
    cin>>a[i];
    t+=a[i];
   }
   if(t<n){
    cout<<-1<<'\n';
   }
   else{
    sort(a.begin(),a.end(),greater<int>());
    int ans=0,sum=0;
    while(sum<n){
       
       
      sum+=a[ans];
      ans++;
    }
    cout<<ans<<'\n';
   }
    return 0;
}