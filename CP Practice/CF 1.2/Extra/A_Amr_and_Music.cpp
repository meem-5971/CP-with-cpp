#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int n,k;
cin>>n>>k;
vector<pair<int,int>>p;

for(int i=1;i<=n;i++){
int x;
cin>>x;
p.push_back({x,i});
}
sort(p.begin(), p.end());
int cnt=0, sum=0;

for(auto u:p){
    sum+=u.first;
    if(sum>k){
        break;
    }
    cnt++;
}
cout<<cnt<<endl;
for(int i=0;i<cnt;i++){
    cout<<p[i].second<<" ";
}

return 0;
}