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
int ax,ay,bx,by,cx,cy,dx=0,dy=0,a=0;
cin>>ax>>ay>>bx>>by>>cx>>cy;
dx=cx+(ax-bx);
dy=(cy-by)+ay;
// cout<<dx<<" "<<dy<<'\n';
a = abs(0.5 * (((ax * by) + (bx * cy) + (cx * dy) + (dx * ay)) - ((ay * bx) + (by * cx) + (cy * dx) + (dy * ax))));
cout<<"Case "<<cs<<": "<<dx<<" "<<dy<<" "<<" "<<a<<'\n';
}
return 0;
}