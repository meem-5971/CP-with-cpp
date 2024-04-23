#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
string s;
cin>>s;
ll mid=0, l=0,r=0;
for(int i=0;i<s.length();i++){
    if(s[i]=='^'){
        mid=i;
    }
}
for(int i=0;i<mid;i++){
    if(s[i]!='='){
        l+=(mid-i)*(s[i]-'0');
    }
}
for(int i=mid+1;i<s.length();i++){
    if(s[i]!='='){
        r+=(i-mid)*(s[i]-'0');
    }
}
if(l==r){
    cout<<"balance"<<'\n';
}
else if(l>r){
    cout<<"left"<<'\n';
}
else{
    cout<<"right"<<'\n';
}
return 0;
}