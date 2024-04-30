#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int m,n;
cin>>m>>n;
map<string,string>mp;
for(int i=0;i<n;i++){
    string s1,s2;
    cin>>s1>>s2;
    mp[s1]=s2;
}
for(int i=0;i<m;i++){
string s1;
cin>>s1;
string s2=mp[s1];
if(s1.size()<=s2.size()){
    cout<<s1<<" ";
}
else{
    cout<<s2<<" ";
}
}

return 0;
}