#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int cnt=1;
int n;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++){
cin>>a[i];
}
int ans=1;
for(int i=1;i<n;i++){
if(a[i]>=a[i-1]){
    cnt++;
      ans=max(ans,cnt);
}
else{
  
    cnt=1;
}
}
cout<<ans<<endl;
return 0;
}