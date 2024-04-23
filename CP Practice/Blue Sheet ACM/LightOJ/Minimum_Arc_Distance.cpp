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
double ox,oy,ax,ay,bx,by;
cin>>ox>>oy>>ax>>ay>>bx>>by;
 double r=sqrt(pow((ox-ax),2)+pow((oy-ay),2));
 double ab=sqrt(pow((ax-bx),2)+pow((ay-by),2));
 double angle=acos((r*r+r*r-ab*ab)/(2.0*r*r));
 cout<<"Case "<<cs<<": "<<fixed<<setprecision(10)<<angle*r<<'\n';

}
return 0;
}