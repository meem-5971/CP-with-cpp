#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int n,a;
cin>>n>>a;
vector<int>v(n+1);
for(int i=1;i<=n;i++){
cin>>v[i];
}
int ans=0;
for(int i=1;i<=n;i++){
   if(v[i]){
     int d=i-a;
    int j=a-d;
    if(j < 1 || j > n || v[i] == v[j]){
        ans++;
    }
   }
}
cout<<ans<<endl;
return 0;
}