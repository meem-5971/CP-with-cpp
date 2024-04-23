#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
vector<ll>v;
ll x;
while(cin>>x){
v.push_back(x);
}

for(int i=v.size()-1; i>=0; i--){
    cout<<fixed<<setprecision(4)<<sqrt(v[i])<<'\n';
}
return 0;
}