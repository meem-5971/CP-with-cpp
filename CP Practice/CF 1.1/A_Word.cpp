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
   ll ss=0,cs=0;
   ll n=s.size();
   for(int i=0;i<n;i++){
    if(s[i]>='A' && s[i]<='Z'){
        cs++;
    }
    else{
        ss++;
    }
   }
    if(ss>=cs){
      for(int i=0;i<n;i++){
      char c=tolower(s[i]);
      cout<<c;
      }
     }
     else{
        for(int i=0;i<n;i++){
        char c=toupper(s[i]);
        cout<<c;
      }
     }
    
    return 0;
}