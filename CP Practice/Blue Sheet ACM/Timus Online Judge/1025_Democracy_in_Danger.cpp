#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int n,cnt=0;
cin >> n;
vector<int>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a.begin(),a.end());
for(int i=0;i<=n/2;i++){
    cnt+=a[i]/2+1;
}
cout<<cnt<<endl;
return 0;
}