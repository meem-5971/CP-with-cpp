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
    ll a,b,c;
    cin>>a>>b>>c;
    ll x,y,z;
    x=a*a;
    y=b*b;
    z=c*c;
    if(x+y ==z || z+x==y || y+z==x){
        cout<<"Case "<<i<<": yes"<<'\n';
    }
    else{
        cout<<"Case "<<i<<": no"<<'\n';
    }

 }  
    return 0;
}