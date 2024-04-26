#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int n;
cin>>n;
map<int,int>mp;
vector<int>a(n);
for(int i=0;i<n;i++){
 cin>>a[i];
 mp[a[i]]++;
}
int x=0,y=0,z=0,total=0;
bool flag=false;
for(int i=0;i<n-1;i++){
 x=i+1;
 for(int j=i+1;j<n;j++){
    y=j+1;
    if(mp[a[i]+a[j]]!=0){
       total=a[i]+a[j];
       flag=true;
       break;
    }
    }
    if(flag==true){
     break;
    }
 
 }
 for(int i=0;i<n;i++){
 if(a[i]==total){
    z=i+1;
    break;
 }
 }
if(flag) cout<<z<<' '<<y<<' '<<x<<endl;
else cout<<-1<<endl;
return 0;
}