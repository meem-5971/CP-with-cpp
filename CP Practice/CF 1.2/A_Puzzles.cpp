#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int x,n;
cin>>x>>n;
vector<int>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a.begin(),a.end());
int d=a[n-1]-a[0];

for(int i=0;i<=n-x;i++){
    if(a[i+x-1]-a[i]<d){
        d=a[i+x-1]-a[i];
    }
   
}
cout<<d<<endl;
return 0;
}