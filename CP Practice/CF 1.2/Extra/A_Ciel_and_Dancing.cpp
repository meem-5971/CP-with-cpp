#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int n,m;
cin>>n>>m;
cout<<n+m-1<<endl;
for (int i = 1; i <= m; ++i)
    {
        cout << "1 " << i << endl;
    }
    for (int i = 2; i <= n; ++i)
    {
        cout << i << " 1" << endl;
    }
return 0;
}