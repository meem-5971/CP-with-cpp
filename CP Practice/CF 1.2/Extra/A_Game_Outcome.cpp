#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int n;
cin>>n;
int a[n][n];
int r[n]={0};
int c[n]={0};
for(int i=0; i<n; i++){
 for(int j=0; j<n; j++){
 cin>>a[i][j];
 }
}
for(int i=0; i<n; i++){
 for(int j=0; j<n; j++){
 r[i]+=a[i][j];
 c[i]+=a[j][i];
 }
}
int ans=0;
for(int i=0; i<n; i++){
 for(int j=0; j<n; j++){
 if(r[i]<c[j]){
 ans++;
 }
 }
}
cout<<ans<<endl;
return 0;
}