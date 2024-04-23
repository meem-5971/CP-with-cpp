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
   vector<int>a(n);
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   int m;
   cin>>m;
   vector<int>b(m);
   for(int i=0;i<m;i++){
    cin>>b[i];
   }
   vector<int>ans;
   int max=0,count=0;
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(b[i]%a[j]==0){
            int x = b[i] / a[j];
                if (x > max)
                {
                    max = x;
                    count = 1;
                }
                else if (x == max)
                {
                    count += 1;
                }
                break;
        }
    }
   }
   
   cout<<count<<'\n';
    return 0;
}