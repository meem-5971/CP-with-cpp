#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int t;
cin>>t;
//cout<<"Case "<<cs<<": "<<x<<'\n';
for(int cs=1;cs<=t;cs++){
int n;
cin>>n;
int x1,y1,z1,x2,y2,z2;
int xl=0,yl=0,zl=0;
int xh=INT_MAX,yh=INT_MAX,zh=INT_MAX;
for(int i=0;i<n;i++){
  cin>>x1>>y1>>z1>>x2>>y2>>z2;
  xl=max(xl,x1);
  xh=min(xh,x2);

  yl=max(yl,y1);
  yh=min(yh,y2);

  zl=max(zl,z1);
  zh=min(zh,z2);
}
int res=(xh-xl)*(yh-yl)*(zh-zl);
if(res>0){
cout<<"Case "<<cs<<": "<<res<<'\n';
}
else{
    cout<<"Case "<<cs<<": 0\n";
}

}
return 0;
}