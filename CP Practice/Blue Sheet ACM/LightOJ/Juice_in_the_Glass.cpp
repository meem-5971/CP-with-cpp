#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int t;
cin>>t;
double pi = acos(-1.0);
//cout<<"Case "<<cs<<": "<<x<<'\n';
for(int cs=1;cs<=t;cs++){
int r1,r2,h,p;
    cin>>r1>>r2>>h>>p;
 double v1=0,v2=0,r3=0,ex=0;
 ex=((r1-r2)*p)/h;
        r3=r2+ex;
        v1 =(pi/3)*p*(r3*r3+r2*r2+r3*r2);
        printf("Case %d: %.10lf\n",cs,v1);
}
return 0;
}