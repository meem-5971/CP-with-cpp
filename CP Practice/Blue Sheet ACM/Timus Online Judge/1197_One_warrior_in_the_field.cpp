#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int n=8;
const int m='h'-'a'+1;
int solve(int r,int c){
    int cnt=0;
    if(r+2<=n){
     if(c+1<=m){
        cnt++;
     }
     if(c-1>=1){
        cnt++;
     }
    }
     if(r-2>=1){
     if(c+1<=m){
        cnt++;
     }
     if(c-1>=1){
        cnt++;
     }
    }
   

    if(c+2<=m){
     if(r+1<=n){
        cnt++;
     }
     if(r-1>=1){
        cnt++;
     }
    }

     if(c-2>=1){
     if(r+1<=n){
        cnt++;
     }
     if(r-1>=1){
        cnt++;
     }
    }

   return cnt;     
}
int main(){
int t;
cin >> t;
while(t--){
    char c;
    cin>>c;
    int r;
    cin>>r;
    cout<<solve(r,c-'a'+1)<<endl;
}
return 0;
}