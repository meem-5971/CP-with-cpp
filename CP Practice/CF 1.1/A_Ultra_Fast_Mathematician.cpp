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
   for(int i=0;i<s1.size();i++){
    if(s1[i]==s2[i]){
        cout<<0;
    }
    else{
        cout<<1;
    }
   }
   cout<<'\n';
    return 0;
}