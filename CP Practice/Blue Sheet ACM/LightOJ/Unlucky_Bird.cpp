#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int t;
cin>>t;
//
for(int cs=1;cs<=t;cs++){
double v1,v2,v3,a1,a2,t1,t2,t3,bird,train=0;
cin>>v1>>v2>>v3>>a1>>a2;
t1=v1/a1;
t2=v2/a2;
if(t1<t2){
    t3=t2;
}
else{
    t3=t1;
}

bird=t3*v3;
train+=v1*t1-0.5*a1*t1*t1;
train+=v2*t2-0.5*a2*t2*t2;
printf("Case %d: %.10lf %.10lf\n", cs, train, bird);
}
return 0;
}