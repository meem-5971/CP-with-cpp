#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int n;
cin >> n;
if(n%2!=0){
    cout<<0<<endl;
}
else{
    if(n%4==0){
        cout<<(n/4)-1<<endl;
    }
    else{
        cout<<n/4<<endl;
    }
}
return 0;
}