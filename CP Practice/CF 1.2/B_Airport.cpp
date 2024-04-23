#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int n,m;
cin>>n>>m;
vector<int>a(m),b(m);
ll sum=0;
for(int i=0;i<m;i++){
cin>>a[i];
b[i]=a[i];

}

for(int i=0; i<n; i++)
    {
        sort(a.begin(),a.end());
        sum+=a[m-1];
        a[m-1]--;
    }



sort(b.begin(),b.end());
int x;
ll sum2=0;
for(int i=0;i<m and n>0;i++)
    {
        x=b[i];
        while(x>0 and n>0){
        sum2+=x, x--, n--;
        }
    }

cout<<sum<<" "<<sum2<<endl;
return 0;
}