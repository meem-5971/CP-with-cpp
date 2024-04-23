#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
    char a[8][8];
    int t1=0,t2=0;
for(int i=0; i<8; i++){
    for(int j=0; j<8; j++){
    cin >>a[i][j];
    if(a[i][j]=='Q'){
        t1+=9;
    }
    else if(a[i][j]=='R'){
        t1+=5;
    }
    else if(a[i][j]=='B'){
        t1+=3;
    }
    else if(a[i][j]=='N'){
        t1+=3;
    }
    else if(a[i][j]=='P'){
        t1+=1;
    }
    else if(a[i][j]=='q'){
        t2+=9;
    }
    else if(a[i][j]=='r'){
        t2+=5;
    }
    else if(a[i][j]=='b'){
        t2+=3;
    }
    else if(a[i][j]=='n'){
        t2+=3;
    }
    else if(a[i][j]=='p'){
        t2+=1;
    }
    }
}
 if(t2==t1){
    cout<<"Draw"<<'\n';
 }
 else if(t2>t1){
    cout<<"Black"<<'\n';
 }
 else{
    cout<<"White"<<'\n';
 }
return 0;
}