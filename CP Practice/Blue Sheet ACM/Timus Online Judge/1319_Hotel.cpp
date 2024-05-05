#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int n;
cin>>n;
int ans[n][n];
int cnt=1;
for (int i = 0; i < 2 * n - 1; i++) {
            int col = n-1-i;
            int row = 0;
        
            if(col<0) {
                row = -col;
                col = 0;
            }
            while(row<n && col<n) {
                ans[row][col] = cnt;
                cnt++;
                row++;
                col++;
            }
}
for(int i = 0; i < n; i++) {
for(int j = 0; j < n; j++) {
cout<<ans[i][j]<<" ";
}
cout<<endl;
}
return 0;
}