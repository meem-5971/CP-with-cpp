#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
ll n;
cin>>n;
ll sum=0;

if(n%2==1){
    sum=((n-1)/2)-n;
}
else{
    sum=n/2;
}

cout<<sum<<endl;
return 0;
}