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
 ll sum=0;
 for(int i=0;i<n;i++){
    int x;
    cin>>x;
    sum+=x;
 } 
 int ans=0; 
 for(int i=1;i<=5;i++ ){
    if((sum+i)%(n+1)!=1){
        ans++;
    }
 }
 cout<<ans<<'\n';
    return 0;
}