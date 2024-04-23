#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int N, sum = 0;
    cin>> N;

    if(N > 0)
    {
        for(int i = 1; i <= N; i++)
        {
            sum = sum + i;
        }
    }
    else if(N <= 0)
    {
        for(int i = N; i <= 1; i++)
        {
            sum = sum + i;
        }
    }

    cout<< sum << endl;
    return 0;
}   