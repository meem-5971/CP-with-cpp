#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int n;
   string s;
   cin>>n>>s;
   int k=s.size();
   int x=1;
   while(n>0){
    x*=n;
    n-=k;
   }
   cout<<x<<'\n';

    return 0;
}