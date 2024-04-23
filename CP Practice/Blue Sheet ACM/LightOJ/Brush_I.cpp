#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   for(int j=1;j<=t;j++){
    int n;
    cin>>n;
    vector<int>a(n);
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>0){
            sum+=a[i];
        }
    }
    cout<<"Case "<<j<<": "<<sum<<'\n';
   }
    return 0;
}