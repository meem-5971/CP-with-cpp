#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int n;
cin>>n;
int ans=0;
for(int i=0; i<n; i++){
ans+=(i+1)*(n-i)-i;
}
cout<<ans<<endl;
return 0;
}