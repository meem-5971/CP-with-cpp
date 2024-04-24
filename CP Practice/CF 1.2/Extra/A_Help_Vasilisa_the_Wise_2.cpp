#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int s[3][2];
    for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
        cin>>s[i][j];
    }
    }
    int a=0,b=0,c=0,d=0;
    bool flag=false;
    for(int i=1;i<=9;i++){
        a=i;
        b=s[0][0]-a;
        c=s[1][0]-a;
        d=s[2][0]-a;
        if(s[0][1]==c+d && s[1][1]==b+d && s[2][1]==b+c && a!=b && a!=c && a!=d &&b!=c && b!=d && c!=d && b>0 && c>0 && d>0 && b<10 && c<10 && d<10){
        flag=true;
        break;
        }
    }
    if(flag){
    cout<<a<<' '<<b<<'\n'<<c<<' '<<d<<'\n';
    }
    else{
    cout<<"-1\n";
    }

return 0;
}