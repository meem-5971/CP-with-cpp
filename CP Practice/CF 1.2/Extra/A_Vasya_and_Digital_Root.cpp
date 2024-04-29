#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int k,d;
cin>>k>>d;
if(d==0){
    if(k>1) cout<<"No solution"<<endl;
    else cout<<0<<endl;
}
else{
    cout<<d;
    for(int i=1;i<k;i++){
        cout<<0;
    }
    cout<<endl;
}
return 0;
}