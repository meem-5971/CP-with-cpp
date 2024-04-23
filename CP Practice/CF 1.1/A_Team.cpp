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
   int cnt=0;
   while(t--){
    int a,b,c;
    cin>>a>>b>>c;
     if((a==1&&b==1&&c==1)||(a==0&&b==1&&c==1)||(a==1&&b==1&&c==0)||(a==1&&b==0&&c==1))
        cnt++;
   }
   cout<<cnt<<'\n';
    return 0;
}