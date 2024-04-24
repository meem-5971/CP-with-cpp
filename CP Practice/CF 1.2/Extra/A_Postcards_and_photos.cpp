#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
string s;
cin>>s;
int ans=0;
int p=1;
for(int i=0;i<s.length()-1;i++){
if(s[i]!=s[i+1]||p==5){
    p=1;
    ans++;
}
else{
    p++;
}
}
cout<<ans+1<<endl;
return 0;
}