#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int n;
cin>>n;
int ans[n][n];

 for ( int i = 0; i < n; i++ ) {
            for ( int j = 0; j < n; j++ )
                cin>>ans[i][j];
        }
 
        cout<<ans[0][0];
        for ( int i = 1; i < n; i++ ) {
            int r = i, c = 0;
            while ( r >= 0 && c < n ) {
                cout<<" "<< ans [r] [c];
                r--, c++;
            }
        }
 
        for ( int i = 1; i < n; i++ ) {
            int r = n - 1, c = i;
            while ( r >= 0 && c < n ) {
                cout<<" "<< ans [r] [c];
                r--, c++;
            }
        }
 
return 0;
}