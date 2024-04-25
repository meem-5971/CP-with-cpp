#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int n;
cin >> n;
vector<ll>a(n);
vector<ll>b(n);
ll ans1=0,ans2=0;
for(int i=0;i<n;i++){
    cin>>a[i];
    ans1=ans1|a[i];
}
for(int i=0;i<n;i++){
    cin>>b[i];
    ans2=ans2|b[i];
}
cout<<ans1+ans2<<endl;

return 0;
}