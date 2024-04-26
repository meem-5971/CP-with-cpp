#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int n;
cin>>n;
string s;
cin>>s;
int o=0,z=0;
for(int i=0; i<n; i++){
if(s[i]=='0'){
    z++;
}
else{
    o++;
}
}
cout<<abs(z-o)<<endl;
return 0;
}