#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int n,m;
cin>>n>>m;
int cnt=1,p=0;
for(int i=0;i<n;i++){
int x;
cin>>x;
if(p+x<=m){
    p+=x;
}
else{
    cnt++;
    p=x;
}
}
cout<<cnt<<endl;
return 0;
}