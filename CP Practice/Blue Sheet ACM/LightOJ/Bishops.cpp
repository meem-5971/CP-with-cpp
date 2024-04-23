#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int t;
cin>>t;
//cout<<"Case "<<cs<<": "<<x<<'\n';
for(int cs=1;cs<=t;cs++){
int r1,r2,c1,c2;
cin>>r1>>c1>>r2>>c2;
if(abs(r1-r2)==abs(c1-c2)){
    cout<<"Case "<<cs<<": "<<1<<'\n';
}
else if(abs(r1-r2)%2==abs(c1-c2)%2){
    cout<<"Case "<<cs<<": "<<2<<'\n';
}
else{
    cout<<"Case "<<cs<<": impossible"<<'\n';
}
}
return 0;
}