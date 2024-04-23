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
   int count1=0;
   int count0=0;
   bool flag=false;
   for(int i=0; i<s.size(); i++){
   if(s[i]=='1'){
    count1++;
    count0=0;
   }
   else if(s[i]=='0'){
    count0++;
    count1=0;
   }
   if(count1>=7 ||count0>=7) {
flag=true;
   break;
   }
   

   }
   if(flag) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
    return 0;
}