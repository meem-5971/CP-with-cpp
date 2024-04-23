#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
 int x11, x12, x13, x21, x22, x23, x31, x32, x33;
 cin >> x11 >> x12 >> x13 >> x21 >> x22 >> x23 >> x31 >> x32 >> x33;  

 if((x11 + x12 + x21) % 2 == 0){
    cout<<1;
 }
else{
    cout<<0;
}
if((x11 + x12 + x13 + x22) %2==0){
    cout<<1;
}
else{
    cout<<0;
}
if((x12 + x13 + x23) % 2 == 0 ){
    cout<<1;
}
else{
    cout<<0;
}
cout<<'\n';
if((x11 + x21 + x22 + x31) % 2 == 0){
    cout<<1;
}
else{
    cout<<0;
}
if((x12 + x21 + x22 + x23 + x32) % 2 == 0 ){
    cout<<1;
}
else{
    cout<<0;
}
if((x13 + x22 + x23 + x33) % 2 == 0){
    cout<<1;
}
else{
    cout<<0;
}
cout<<'\n';
if((x21 + x31 + x32) % 2 == 0){
    cout<<1;
}
else{
    cout<<0;
}
if((x22 + x31 + x32 + x33) % 2 == 0){
    cout<<1;
}
else{
    cout<<0;
}
if((x23 + x32 + x33) % 2 == 0){
    cout<<1;
}
else{
    cout<<0;
}
cout<<'\n';

    return 0;
}