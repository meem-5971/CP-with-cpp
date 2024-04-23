#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   string s1,s2;
   cin>>s1>>s2;
   for (auto &x :s1){
    x=tolower(x);
   }
    for (auto &x :s2){
    x=tolower(x);
   }
   if(s1==s2){
    cout<<0<<'\n';
   }
   else if(s1<s2){
    cout<<-1<<'\n';
   }
   else{
    cout<<1<<'\n';
   }

    return 0;
}