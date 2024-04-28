#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
 

  }      

int main(){
 int n;
  cin>>n;
  string s;
  cin>>s;
  bool b = false;
  for(int i=0; i<n; i++){
    if(s[i] != '4' && s[i] != '7'){
      b = true;
      break;
    }
  }
  if(b){
  cout<<"NO"<<endl;
  }
  else{
    ll sum1=0,sum2=0;
    for(int i=0; i<n/2; i++){
      sum1+=s[i]-'0';
    }
     for(int i=n/2; i<n; i++){
      sum2+=s[i]-'0';
    }
    if(sum1 == sum2){
    
     cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
      }
  }

return 0;
}