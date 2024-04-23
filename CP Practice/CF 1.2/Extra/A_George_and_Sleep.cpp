#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
string s1,s2;
int h0,m0,h1,m1;
char c;
cin>>h0>>c>>m0;
cin>>h1>>c>>m1;
int hp=h0-h1;
int mp=m0-m1;
if(mp<0){
    hp--;
    mp+=60;
}
if(hp<0){
    hp+=24;
}
printf("%02d:%02d", hp, mp);
return 0;
}