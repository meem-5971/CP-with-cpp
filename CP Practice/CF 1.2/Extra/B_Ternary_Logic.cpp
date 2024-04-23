#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
ll a,b;
cin>>a>>b;
ll at[20]={0},bt[20]={0},an=0,bn=0;
    while(a>0){
     at[an]=a%3;
     an++;
      a/=3;
    }
    while(b>0){
      bt[bn]=b%3;
      bn++;
      b/=3;

    }
    ll ans=0;
    ll m=max(an,bn);
    for(int i=m;i>=0;i--){
        ans=ans*3+(bt[i] + 3 - at[i]) % 3;
    }
    cout<<ans<<endl;
return 0;
}