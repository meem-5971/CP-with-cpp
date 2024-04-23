#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  string s1,s2,s3;
  cin>>s1>>s2>>s3;
  map<int,char>ma; 
  map<int,char>mb; 
  for(int i=0;i<s1.size();i++){
    ma[s1[i]]++;
  }
   for(int i=0;i<s2.size();i++){
    ma[s2[i]]++;
  }
   for(int i=0;i<s3.size();i++){
    mb[s3[i]]++;
  }
  bool flag=true;
  if(s1.size()+s2.size()!=s3.size()){
    flag=false;
  }
  else{
      for(int i=0;i<s3.size();i++){
    if(ma[s3[i]]!=mb[s3[i]]){
        flag=false;
        break;
    }
  }
  }
  if(flag) cout<<"YES"<<'\n';
  else cout<<"NO"<<'\n';
  
    return 0;
}