#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int n,d;
cin>>n>>d;
int sum=0;
for(int i=0;i<n;i++){
int x;
cin>>x;
sum+=x;
}
if(sum+10*(n-1)>d){
    cout<<-1<<endl;
}
else{
    cout<<(d-sum)/5<<endl;
}
return 0;
}