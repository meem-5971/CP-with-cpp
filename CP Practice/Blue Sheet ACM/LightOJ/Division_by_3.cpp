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
    int n,m;
    cin>>n>>m;
    int x=(n/3)*2;
    int y=n%3;
        if(y==2)
            x+=1;
       int p=(m/3)*2;
        int q=m%3;
        if(q==2)
            p+=1;
        int ans=abs(x-p);
        ans++;
        if(y==1)
            ans--;

    cout<<"Case "<<cs<<": "<<ans<<"\n";
   }
    return 0;
}