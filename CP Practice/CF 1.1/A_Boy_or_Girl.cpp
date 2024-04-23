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
   set<char>st;
   for(int i=0;i<s.size();i++){
    st.insert(s[i]);
   }
   if(st.size()%2==1){
    cout<<"IGNORE HIM!";
   }
   else{
    cout<<"CHAT WITH HER!";
   }
    return 0;
}