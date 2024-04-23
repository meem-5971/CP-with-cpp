#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int n;
   cin>>n;
   string s;
   cin>>s;
   ll t=0;
   for(int i=0;i<n-1;i++){
    if(s[i]==s[i+1]){
        t++;
    }
   }
   cout<<t<<'\n';
    return 0;
}