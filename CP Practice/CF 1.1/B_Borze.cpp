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
  for(int i=0;i<s.size();i++){
   if(s[i]=='.'){
    cout<<0;
   }
   if(s[i]=='-' && s[i+1]=='.'){
		cout<<1;
		++i;
		
	}
	if(s[i]=='-' && s[i+1]=='-'){
		cout<<2;
		++i;
	}
  } 
    return 0;
}