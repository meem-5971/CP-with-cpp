#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod=10000007;
void solve(){
        
}
int main(){
int t;
cin>>t;
//cout<<"Case "<<cs<<": "<<x<<'\n';
int a,b,c,d,e,f,n;
ll hexfib[10006];
for(int cs=1;cs<=t;cs++){
 cin>>hexfib[0]>>hexfib[1]>>hexfib[2]>>hexfib[3]>>hexfib[4]>>hexfib[5]>>n;
  for (int i =6; i <= n; ++i) {
            hexfib[i] =( hexfib[i-1]+hexfib[i-2]+hexfib[i-3]+hexfib[i-4]+hexfib[i-5]+hexfib[i-6] ) %mod;
        }
        cout<<"Case "<<cs<<": "<<hexfib[n]%mod<<'\n';
}

return 0;
}