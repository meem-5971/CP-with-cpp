#include<bits/stdc++.h>
#define ll long long
using namespace std;
double angle(double a, double b, double c){
    return acos((b*b+c*c-a*a)/(2*b*c));
        
}
int main(){
int t;
cin>>t;
//cout<<"Case "<<cs<<": "<<x<<'\n';
for(int cs=1;cs<=t;cs++){
double r1,r2,r3;
cin>>r1>>r2>>r3;

double s=(r1+r1+r2+r2+r3+r3)/2;
double tr=sqrt(s*(s-r1-r2)*(s-r2-r3)*(s-r3-r1));
double ar1=angle(r2+r3,r3+r1,r1+r2);
double ar2=angle(r1+r3,r2+r1,r3+r2);
double ar3=angle(r2+r1,r3+r2,r1+r3);
tr-=(0.5*r1*r1*ar1);
tr-=(0.5*r2*r2*ar2);
tr-=(0.5*r3*r3*ar3);
cout<<"Case "<<cs<<": "<<fixed<<setprecision(10)<<tr<<'\n';
}
return 0;
}