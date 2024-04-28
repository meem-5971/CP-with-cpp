#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int n,k;
cin >> n >> k;
vector<int>a(1e5);
for(int i=0;i<n;i++){
    cin >> a[i];
}
sort(a.begin(), a.end(),greater<int>());
a[n]=0;
if(k>n){
    cout<<-1<<endl;
}
else{
    cout<<a[k-1]<<' '<<0<<endl;
}
return 0;
}