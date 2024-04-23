#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  int n;
  cin>>n;
  int z=0,f=0;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    if(x==0){
        z++;
    }
    else{
        f++;
    }
  } 
    if (z == 0)
        cout << -1 << endl;
    else if (f < 9)
        cout << 0 << endl;
    else
    {
        f -= f % 9;
        for (int i = 0; i < f; i++)
            cout << 5;
        for (int i = 0; i < z; i++) 
            cout << 0;
    }
    return 0;
}