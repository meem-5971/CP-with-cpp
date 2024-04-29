#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int n,t,c;
cin>>n>>t>>c;
int ans=0,cnt=0;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    
    if(x<=t){
     cnt++;
    }
    else{
        cnt=0;
    }
    if(cnt>=c){
        ans++;
        
    }
}
cout<<ans<<endl;
return 0;
}