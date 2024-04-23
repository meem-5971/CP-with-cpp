#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0) 
using namespace std;

void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   for(int cs=1;cs<=t;cs++){
    double r;
    double n;
    cin>>r>>n;
     double p = ( pi ) / n ;
     double sr= r*sin(p);
     sr/=(1+sin(p));
     printf ("Case %d: %.10lf\n",cs,sr);
   }
    return 0;
}