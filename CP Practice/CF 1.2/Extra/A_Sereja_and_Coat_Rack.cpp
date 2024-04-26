#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int n,d;
cin>>n>>d;
vector<int>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
int m;
cin>>m;

int t=min(m,n);
int pro=0;

if(m>n){
    for(int i=0;i<n;i++){
pro+=a[i];
}
    pro-=(m-n)*d;
}
else{
sort(a.begin(),a.end());
for(int i=0;i<m;i++)
            {
                pro+=a[i];
            }
}
cout<<pro<<'\n';
return 0;
}