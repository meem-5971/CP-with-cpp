#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int n;
cin>>n;
map<int,int>mp;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    mp[x]++;
}
int ans=-1;
if(mp[1]==0){
    ans=1;
}
cout<<ans<<endl;
return 0;
}