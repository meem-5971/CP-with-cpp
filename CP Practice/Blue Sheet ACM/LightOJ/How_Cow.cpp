#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  int t;
   cin>>t;
   for(int cs=1; cs<=t; cs++){
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int n;
    cin>>n;
    cout<<"Case "<<cs<<": "<<'\n';
    while(n--){
        int x,y;
        cin>>x>>y;
        if(x>x1 && y>y1 && x<x2 && y<y2){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    
    solve();
   } 
    return 0;
}