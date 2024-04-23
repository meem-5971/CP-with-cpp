#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int n,m;
cin >> n >> m;
char a[m][n];
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin >> a[j][i];
    }
}
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        if(a[j][i]=='.'){
            if((j+i)%2==0)a[j][i]='B';
                else a[j][i]='W';


            }
           
        }
    }

for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cout<< a[j][i];
    }
    cout<<endl;
}
return 0;
}