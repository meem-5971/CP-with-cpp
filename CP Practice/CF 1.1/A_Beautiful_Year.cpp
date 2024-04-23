#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   ll n;
   cin>>n;
   while(1){
    n++;
    int u=n/1000;//1st dig
    int v=n/100%10;//2nd dig
    int w=n%10;//4th dig
    int x=(n/10)%10;//3rd dig
   // cout<<u<<' '<<v<<' '<<w<<' '<<x;
   if(u != v && u != w && u!=x && v!=w && v!=x && w!=x){
       
        break;
     }
   }
   cout<<n<<'\n';
    return 0;
}