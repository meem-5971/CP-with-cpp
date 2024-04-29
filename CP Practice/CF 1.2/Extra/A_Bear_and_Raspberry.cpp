#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int n,d;
cin >> n >> d;
int ans=0;
vector<int>a(n);
for(int i=0;i<n;i++){
    cin >> a[i];
}

for(int i=0;i<n-1;i++){
ans=max(ans,a[i]-a[i+1]-d );
}
cout<<ans<<endl;
return 0;
}