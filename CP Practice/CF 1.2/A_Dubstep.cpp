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
   bool flag=true;
   for(int i=0;i<s.size();i++){
    if(s[i]=='W'&& s[i+1]=='U' && s[i+2]=='B'){
	        i+=2;
            if(!flag){
	            cout<<" ";
	        }
            continue;
    }
    else{
        flag=false;
	        cout<<s[i];
    }
   }
    return 0;
}