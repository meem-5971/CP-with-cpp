        #include<bits/stdc++.h>
#include<math.h>
#define ll long long
using namespace std;

 int main()
    {
        double sum[1000005],rs;
        int x,t,i;
        cin>>t;
        for(i=1;i<=1000002;i++)
        {
            sum[i]=sum[i-1]+log(i);
        }
        for(int cs=1;cs<=t;cs++)
        {
            int n,base;
            int result;
            result=0;
            cin>>n>>base;
            rs=sum[n];
            result=(rs/log(base))+1;
            cout<<"Case "<<cs<<": "<<result<<'\n';
        }
        return 0;
    }