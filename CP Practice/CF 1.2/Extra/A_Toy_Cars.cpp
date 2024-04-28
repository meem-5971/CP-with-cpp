#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int n;
cin>>n;
vector<int>v;
int cnt=0;
for(int i=0; i<n; i++){
    bool f=false;
for(int j=0; j<n; j++){
    int x;
    cin>>x;
    if(x==1 ||x==3){
     f=true;
    }
}
    if(f==false){
        cnt++;
        v.push_back(i+1);
    }
}
cout<<cnt<<endl;
for(auto u:v){
    cout<<u<<" ";
}
return 0;
}