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
 for(int i=1;i<=t;i++){
  int n,m;
   cin>>n>>m;
   if(n==1 || m==1){
    cout<<"Case "<<i<<": "<<max(n,m)<<'\n';
   }
   else if(n==2 || m==2){
    if(((m*n)%8)>=4){
        cout<<"Case "<<i<<": "<<(((m*n)/8)*4)+4<<'\n';
    }
    else{
        cout<<"Case "<<i<<": "<<(((m*n)/8)*4)+((m*n)%8)<<'\n';
    }
   }
   else{
    cout<<"Case "<<i<<": "<<(m*n +1)/2<<'\n';
   }
 }
  
    return 0;
}