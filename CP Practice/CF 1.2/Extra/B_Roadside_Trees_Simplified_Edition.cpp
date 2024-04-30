#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int n;
cin>>n;
int ans=2*n-1;
int a=0;
for(int i=0; i<n; i++){
int x;
cin>>x;
ans+=abs(x-a);
a=x;
}
cout<<ans<<endl;
return 0;
}