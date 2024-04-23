#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
int n;
while(cin>>n){
int k=n;
for(int i=0;i<3;i++){
    int a,b;
    cin>>a>>b;
    if(a==k){
     k=b;
    }
    else if(b==k){
    k=a;
    }
}
cout<<k<<'\n';
}

return 0;
}