#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int n,v;
cin>>n>>v;
vector<int>ans;
for(int i=0;i<n;i++){
    bool f=false;
    int x;
    cin>>x;
    for(int j=0;j<x;j++){
        int y;
        cin>>y;
        if(!f && v>y){
            f=true;
            ans.push_back(i);
            
        }

    }
}
cout<<ans.size()<<endl;
for(auto u:ans){
    cout<<u+1<<" ";
}
return 0;
}