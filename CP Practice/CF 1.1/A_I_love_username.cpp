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
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
  
   int t=0;
   if(n<2){
    cout<<0<<'\n';

   }
   else{
     int mx=a[0],mn=a[0];
     for(int i=1;i<n;i++){
    if(a[i]>mx){
        t++;
        mx=a[i];
    }
    else if(a[i]<mn){
        t++;
        mn=a[i];
    }
   }
   cout<<t<<'\n';
   }
   
    return 0;
}