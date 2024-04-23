#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
bool prime(ll n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
 
    return true;
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   ll n,m;
   cin>>n>>m;
   bool flag;
   for(ll i=n+1;i<=m;i++){
    if(prime(i)){
       if(i==m){
         flag=true;
       }
       else{
        flag=false;
       }
       break;
    }
   }
   if(flag) cout<<"YES"<<'\n';
   else cout<<"NO"<<'\n';
    return 0;
}