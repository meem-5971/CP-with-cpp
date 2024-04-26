#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int n,m;
cin>>n>>m;
bool flag=false;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        int x;
        cin>>x;
        if(x==1){
if(i==0 || i==n-1){
            flag=true;
        }
        if(j==0 || j==m-1){
            flag=true;
        }
        }
        
    }
}
if(flag) cout<<2<<endl;
else cout<<4<<endl;
return 0;
}