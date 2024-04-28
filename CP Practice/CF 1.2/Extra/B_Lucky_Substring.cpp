#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
string st;
cin>>st;
int n=st.length();
int f=0,s=0,fs=0;
for(int i=0;i<n;i++){
    if(st[i]=='4')   f++;
    else if(st[i]=='7')   s++;
    else if(st[i]=='4' && st[i]=='7' && i+1<n)   fs++;
}
if(fs==0 && s==0 && f==0){
    cout<<-1<<endl;
}
else{
    int ans=0;
    ans=max(f,max(fs,s));
    if(ans==f) cout<<4<<endl;
    else if(ans==s) cout<<7<<endl;
    else if(s==f) cout<<4<<endl;
    else cout<<47<<endl;
}

return 0;
}