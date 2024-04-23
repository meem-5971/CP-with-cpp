#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
ll sum=0;
int a,b,c,d,e;
cin >> a >> b >> c >> d >> e;
sum=a+b+c+d+e;
if(sum>0 && sum%5==0){
    cout << sum/5 << endl;
}
else{
    cout << -1 << endl;
}
return 0;
}