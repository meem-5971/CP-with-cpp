#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
     
}
int main(){
  int n,m,k;
  cin>>n>>m>>k; 
  int cnt = 0;
  for(int i=0;i<n;i++){
   int x;
   cin>>x;
   if(x==1){
    if(m>0){
        m--;
    }
    else{
        cnt++;
    }
   }
   else{
        if(k>0){
            k--;
        }
        else if(m>0){
            m--;
        }
        else{
            cnt++;
        }
   }
  }
  cout<<cnt<<endl;

return 0;
}