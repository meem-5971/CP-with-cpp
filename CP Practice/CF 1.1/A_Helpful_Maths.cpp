#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   string s;
   cin>>s;
   ll o=0,t=0,tr=0;
   for(int i=0;i<s.size();i++){
    if(s[i]=='1'){
     o++;
    }
    else if(s[i]=='2'){
        t++;
    }
    else if(s[i]=='3'){
        tr++;
    }
   }
  
    for(int i=0; i<o; i++)
    {
        cout << '1';
        if((t == 0 && tr == 0) && i == o-1)
        {
            cout << endl;
        }
        else
        {
            cout << '+';
        }
    }
    for(int i=0; i<t; i++)
    {
        cout << '2';
        if(i== t - 1 && tr == 0)
        {
            cout << endl;
        }
        else
        {
            cout << '+';
        }
    }
    for(int i=0; i<tr; i++)
    {
        cout << '3';
        if(i == tr - 1)
        {
            cout << endl;
        }
        else
        {
            cout << '+';
        }
    }
    return 0;
}