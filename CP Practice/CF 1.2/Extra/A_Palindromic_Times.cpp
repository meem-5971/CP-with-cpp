#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int h,m;
char c;
cin >> h >> c>>m;
while(1){
    m++;
    if(m==60) h++,m=0;
    if(h==24) h=0;
    if(h/10==m%10 && h%10==m/10)break;
}
cout<<h/10<<h%10<<":"<<m/10<<m%10<<endl;

return 0;
}