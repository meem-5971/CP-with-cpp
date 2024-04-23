#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   ll n;
   cin>>n;
   vector<ll>a(n);
   double d=0;
   for(int i=0;i<n;i++){
    cin>>a[i];
    d+=(a[i]);
   }
   cout<<d/n<<'\n';
    return 0;
}