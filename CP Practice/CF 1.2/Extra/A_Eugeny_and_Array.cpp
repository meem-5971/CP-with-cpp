#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int n,q;
cin>>n>>q;
 vector<int>a(n);
 int num1=0,num2=0;
 for(int i=0;i<n;i++){
  cin>>a[i];
  if(a[i]==1) num1++;
  else num2++;
 }
 while (q--){
    int l,r;
    cin>>l>>r;
   int mid=r-l+1;
   if(mid%2==1){
    cout<<0<<endl;
   }
   else{
    if(num1>=mid/2 && num2>=mid/2) cout<<1<<endl;
    else cout<<0<<endl;
   }
 }
return 0;
}