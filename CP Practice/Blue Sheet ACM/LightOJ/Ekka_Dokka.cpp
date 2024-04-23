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
   for(int cs=1; cs<=t; cs++){
    ll w;
    cin>>w;
    if(w%2!=0){
        cout<<"Case "<<cs<<": Impossible"<<endl;
    }
    else{
        ll odd=w/2;
        ll even=2;
        while(odd%2==0){
         odd/=2;
         even*=2;
        }
        cout<<"Case "<<cs<<": "<<odd<<" "<<even<<endl;
    }
   }
    return 0;
}