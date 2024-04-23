#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int n,m;
   cin>>n>>m;
   vector<int>a(m);
   for(int i=0;i<m;i++){
    cin>>a[i];
   }
   ll sum=0;
   sum+=(a[0]-1);
   for(int i=1;i<m;i++){
     if(a[i]>a[i-1]){
        sum+=(a[i]-a[i-1]);
     }
     else if(a[i]<a[i-1]){
        sum+=(n-a[i-1]+a[i]);
     }
   }
   cout<<sum<<'\n';

    return 0;
}