#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
string s;
cin >> s;
string hl="hello";
int cnt=0,j=0;
for(int i=0; i<s.size(); i++){
    if(s[i]==hl[j]){
        cnt++;
        j++;
    }
}
if(cnt==5){
cout<<"YES"<<endl;
}  
else{
    cout<<"NO"<<endl;
}
return 0;
}