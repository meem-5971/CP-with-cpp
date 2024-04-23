#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  int n;
  cin>>n;
  vector<int>a(n); 
  vector<int>b(n); 
  for(int i=0;i<n;i++){
    cin>>a[i];
    b[i]=a[i];
  }
 // sort(b.begin(),b.end());
  ll x=abs(a[0]-a[n-1]);
  ll y=1001;
  y=min(x,y);
  ll p=1,q=n;
  for(int i=0;i<n;i++){
    x=abs(a[i]-a[i+1]);
    if(y>x){
        y=x;
       p=i+1;
       q=i+2;
    }   
  }
  cout<<p<<' '<<q<<'\n';
    return 0;
}