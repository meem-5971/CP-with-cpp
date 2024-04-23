#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
 int s1,s2,s3;
 cin>>s1>>s2>>s3;
 int a=sqrt((s1*s2)/s3);  
 int b=sqrt((s1*s3)/s2);  
 int c=sqrt((s3*s2)/s1);
 cout<<4*(a+b+c)<<'\n';  
    return 0;
}