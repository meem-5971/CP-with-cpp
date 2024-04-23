#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int n,s;
cin>>n>>s;
int t=0;
vector<int>v(1e5);

for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    
   v[a]=max(v[a],b);

}
//sort(v.begin(),v.end(),greater<int>());

for(int i=s;i>0;i--){
t=max(v[i],t);
t++;
}
cout<<t<<'\n';
return 0;
}