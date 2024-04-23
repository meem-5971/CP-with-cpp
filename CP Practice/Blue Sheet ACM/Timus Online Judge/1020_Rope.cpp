#include<bits/stdc++.h>
#define ll long long
using namespace std;
double pi=3.1415926;
double solve(double a, double b, double c, double d){
    double dx=a-c;
    double dy=b-d;
    return sqrt(dx*dx+dy*dy); 
}
int main(){
int n;
double r;
cin>>n>>r;
double ans=0;
double d[n][2];
for(int i=0;i<n;i++){
    cin>>d[i][0]>>d[i][1];
    if(i>0)
    ans+=(solve(d[i][0],d[i][1],d[i-1][0],d[i-1][1]));   
}
ans+=solve(d[0][0],d[0][1],d[n-1][0],d[n-1][1]);
ans+=2*pi*r;
cout<<fixed<<setprecision(2)<<ans<<endl;
return 0;
}