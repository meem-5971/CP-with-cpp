#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int n;
cin >> n;
vector<int>a(n);
for(int i = 0; i < n;i++){
    cin >> a[i];
}
int cnt=0,ans=0,k=0;
for(int i = 0; i < n; i++){
cnt=1;
k=i;
for(int j=i-1;j>=0;j--){
if(a[j]<=a[k]){
    cnt++;

}
else{
    break;
}
k--;
}
 k=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<=a[k])
                cnt++;
            else
                break;

            k++;
        }
        ans=max(ans,cnt);
}
cout<<ans<<endl;


return 0;
}