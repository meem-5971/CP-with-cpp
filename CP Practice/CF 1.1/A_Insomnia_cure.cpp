#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   ll k,l,m,n,d;
   cin>>k>>l>>m>>n>>d;
   ll t=d;
   if(k==1 || l==1 || m==1 || n==1){
    cout<<d<<'\n';
   }
   else{
    for(int i=1;i<=d;i++){
    if(i%k!=0 && i%l!=0 && i%m!=0 && i%n!=0 ){
        t--;
    }
   }
   cout<<t<<'\n';
   }
   
    return 0;
}