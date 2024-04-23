#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   ll n;
   cin>>n;
   if(n%2==1){
    cout<<-1<<'\n';
   }
   else{
    for(int i=1;i<=n;i+=2){
        cout<<i+1<<' '<<i<<' ';
    }
    cout<<'\n';
   }
    return 0;
}