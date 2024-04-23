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
   vector<int>a(7);
   
   for(int i=0;i<7;i++){
    cin>>a[i];
   }
   int cnt=0;
   int i=0;
   while(n>0){
    cnt++;
    n-=a[i%7];
    i++;
   }
   if(cnt%7==0) cout<<7<<'\n';
   else cout<<cnt%7<<'\n';
    return 0;
}