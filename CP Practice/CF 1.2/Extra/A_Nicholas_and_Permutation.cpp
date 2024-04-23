#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int n;
cin>>n;
int a[n];
int pf=0,pl=0;
for(int i=0; i<n; i++){
    cin>>a[i];
    if(a[i]==1){
        pf=i+1;
    }
    if(a[i]==n){
        pl=i+1;
    }
}
int p=max(abs(n-pl),abs(n-pf));
int q=max(abs(1-pl),abs(1-pf));
cout<<max(p,q)<<endl;
return 0;
}