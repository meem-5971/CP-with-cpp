#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int m[5];
int w[5];
int h,uh;
for(int i=0;i<5;i++){
cin >> m[i];
}
for(int i=0;i<5;i++){
cin >> w[i];
}
cin>>h>>uh;
int pt[5] = {500, 1000, 1500, 2000, 2500};
ll sum=h*100 - uh*50;
for(int i=0;i<5;i++){
    sum+=max(pt[i]-pt[i]*m[i]/250-50*w[i], pt[i]/10*3);
}



cout<<sum<<endl;
return 0;
}