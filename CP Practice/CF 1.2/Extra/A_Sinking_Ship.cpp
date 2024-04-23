#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int t;
cin>>t;
string s,r;
vector<string>rat;
vector<string>wmch;
vector<string>man;
vector<string>captain;
while(t--){
cin>>s>>r;
if(r=="rat"){
    rat.push_back(s);
}
else if(r=="woman" || r=="child"){
    wmch.push_back(s);
}
else if(r=="captain"){
    captain.push_back(s);
}
else if(r=="man" ){
    man.push_back(s);
}
}
for(auto u:rat){
    cout<<u<<endl;
}
for(auto u:wmch){
    cout<<u<<endl;
}
for(auto u:man){
    cout<<u<<endl;
}
for(auto u:captain){
    cout<<u<<endl;
}
return 0;
}