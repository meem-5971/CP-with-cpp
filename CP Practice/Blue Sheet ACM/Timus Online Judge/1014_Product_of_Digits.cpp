#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
ll n;
cin>>n;
if(n==0){
    cout<<10<<endl;
}
else if(n==1){
    cout<<1<<endl;
}
else{
    vector<int>ans;
    for(int i=9;i>=2;i--){
    while(n%i==0){
        ans.push_back(i);
        n/=i;
    }
    }
    if(n==1){
        reverse(ans.begin(),ans.end());
        for(auto u:ans){
            cout<<u;
        }
        cout<<endl;
    }
    else{
        cout<<-1<<'\n';
    }
}

return 0;
}