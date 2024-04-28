#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int n;
cin >> n;
vector<int>a(n);
for(int i=0;i<n;i++){
cin >> a[i];
}
sort(a.begin(), a.end(),greater<int>());
int ans=0;
for(int i=0;i<n;i++){
if(i%2==0){
ans+=a[i]*a[i];
}
else{
    ans-=a[i]*a[i];
}
}
cout<<fixed<<setprecision(10)<<ans*3.1415926536;
return 0;
}