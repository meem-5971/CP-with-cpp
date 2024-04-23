#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int t;
cin>>t;
int speed[1001],ram[1001],hdd[1001],cost[1001];
for(int i=0;i<t;i++){
    cin>>speed[i]>>ram[i]>>hdd[i]>>cost[i];
}
for(int i=0;i<t;i++){
    for(int j=0;j<t;j++){
 if(speed[i] < speed[j] && ram[i] < ram[j] && hdd[i] < hdd[j]){
     cost[i] = 1001; 
 }
}
}
auto mn=min_element(cost,cost+t);
cout<<distance(cost,mn)+1<<'\n';
return 0;
}