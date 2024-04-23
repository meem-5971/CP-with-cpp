#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   ll n,k,l,c,d,p,nl,np;
   cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    ll u=k*l;
    ll v=u/nl;
    ll w=c*d;
    ll x=p/np;

    ll res=min(w,x);
     res=min(res,v);
    cout<<res/n<<'\n';

    return 0;
}