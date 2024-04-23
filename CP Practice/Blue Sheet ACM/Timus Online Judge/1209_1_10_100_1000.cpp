#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
 ll t;
 cin>>t;
 while(t--){
    ll n;
    cin>>n;
    ll p=(sqrt(double(n*8-7))-1)/2.0;
    if(n== p*(p+1)/2+1) cout <<1<<' ';
    else cout<<0<<' ';

 }  
    return 0;
}