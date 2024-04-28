#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int a,b;
cin>>a>>b;
int ans=0;
while(a>0 && b>0){
    if(a==1 && b==1){
        break;
    }
    if(a>b){
        a-=2;
        b++;
    }
    else{
        b-=2;
        a++;
    }
    ans++;
}
cout<<ans<<endl;
return 0;
}
