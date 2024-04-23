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
   for(int i=1;i<=t;i++){
    double r;
    cin>>r;
    double p=2*r;
    double carea = 2 * acos(0.0) * r * r;
	double	sarea = (2 * r) * (2 * r);
	double	area = sarea - carea;

		printf("Case %d: %.2lf\n",i, area);

   }
    return 0;
}