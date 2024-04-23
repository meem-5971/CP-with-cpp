#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int na,nb,k,m;
cin>>na>>nb>>k>>m;
vector<ll>a(na);
vector<ll>b(nb);
for(int i=0;i<na;i++){
    cin>>a[i];
}
for(int i=0;i<nb;i++){
    cin>>b[i];
}
// sort(a.begin(),a.end());
// sort(b.begin(),b.end(),greater<ll>());

if(a[k-1]<b[nb-m]){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
return 0;
}