#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int s[3][3];
int k=0;
 for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cin>>s[i][j],k+=s[i][j];
    }
     k/=2;

    int x=s[1][0]+s[1][2]-s[0][1]-s[0][2];
   int y=s[2][0]+s[2][1]-s[1][0]-s[1][2];

   int c=(k-x-2*y)/3;
   int b=y+c;
   int a=x+b;

    s[0][0]=a;s[1][1]=b;s[2][2]=c;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cout<<s[i][j]<<' ';
        cout<<'\n';
    }

return 0;
}