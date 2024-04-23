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
   int cs=1;
   for(int i=1;i<=t;i++){
    ll n;
    cin>>n;
    ll x=ceil(sqrt(n));
    switch(n) {
			case 1:
				cout <<"Case "<<i<<": "<<1<<" "<<"1\n";
				continue;
				break;
			case 2:
				cout <<"Case "<<i<<": "<<1<<" "<<"2\n";
				continue;
				break;
			case 3:
				cout <<"Case "<<i<<": "<<2<<" "<<"2\n";
				continue;
				break;
			case 4:
				cout <<"Case "<<i<<": "<<2<<" "<<"1\n";
				continue;
				break;
		}
        if(x%2==1){
           ll m = (x - 1) * (x - 1);
			if(m + x >= n) {
				ll f = n - m;
				cout <<"Case "<<i<<": "<<x<<" "<<f<<"\n";
			}

			else {
				m = x * x;
				ll f = m - n;
				f++;
				cout <<"Case "<<i<<": "<<f<<" "<<x<<"\n";
			}
        }
        else{
            ll m = (x - 1) * (x - 1);
			if(m + x >= n) {
				ll f = n - m;
				cout <<"Case "<<i<<": "<<f<<" "<<x<<"\n";
			}

			else {
				m = x * x;
				ll f = m - n;
				f++;
				cout <<"Case "<<i<<": "<<x<<" "<<f<<"\n";
			}
        }
        
       cs++;
   }
    return 0;
}