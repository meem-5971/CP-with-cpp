#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   string s;
   cin>>s;
   int n=s.size();
   string ans="";
   for(int i=0; i<n; i++){
   if(s[i]!='a' && s[i]!='A' && s[i]!='e' && s[i]!='E' && s[i]!='i' && s[i]!='I' && s[i]!='o' && s[i]!='O' && s[i]!='u' && s[i]!='U' && s[i]!='Y' && s[i]!='y'){
    ans+='.';
    ans+=tolower(s[i]);
   }
   }
   cout<<ans<<endl;
    return 0;
}