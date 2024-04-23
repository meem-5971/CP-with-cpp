#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int m,n;
   cin>>m>>n;
   vector<int>a(m);
   for(int i=0;i<m;i++){
    cin>>a[i];
   }
   sort(a.begin(),a.end());
   ll sum=0;
   for(int i=0;i<n;i++){
    if(a[i]<=0)
      sum+=abs(a[i]);
   }
   cout<<sum<<'\n';
    return 0;
}