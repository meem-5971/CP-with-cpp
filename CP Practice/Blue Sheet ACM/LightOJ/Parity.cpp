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
    int n;
    cin>>n;
    ll sum=0;
    while(n>0){
        sum+=n%2;
        n/=2;
    }
    if(sum%2==0){
        cout<<"Case "<<cs<<": even\n";
    }
    else{
        cout<<"Case "<<cs<<": odd\n";
    }
   } 
    return 0;
}