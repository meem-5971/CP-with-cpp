#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
ll a,b,s;
cin>>a>>b>>s;
if(s<(abs(a)+abs(b)) || (s-abs(a)-abs(b))%2==1){
    cout<<"No"<<endl;
}
else{
    cout<<"Yes"<<endl;
}
return 0;
}