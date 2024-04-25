#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int m;
cin>>m;
vector<int>a(m+1);
int total=0;
for(int i=1;i<=m;i++){
    cin>>a[i];
    total+=a[i];
}
int x,y;
cin>>x>>y;
int sum=0;
int ans=0;
for(int i=1;i<=m;i++){
    sum+=a[i];
    if(sum>=x && sum<=y && (total-sum)>=x && (total-sum)<=y){
      ans=i+1;
      break;
    }

}
cout<<ans<<endl;
return 0;
}