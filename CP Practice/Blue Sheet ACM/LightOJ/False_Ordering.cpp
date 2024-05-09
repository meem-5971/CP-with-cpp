#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b){
    	if(a.first < b.first) {
		return 1;
	}

	if(a.first > b.first) {
		return 0;
	}

	if(a.second > b.second) {
		return 1;
	}

	return 0;
}
int main(){
int t;
cin>>t;
//cout<<"Case "<<cs<<": "<<x<<'\n';
for(int cs=1;cs<=t;cs++){
int n;
cin>>n;
vector<pair<int,int>>v(1001);
for(int i=1;i<=1000;i++){
    v[i].first=0;
    v[i].second=i;
}
for(int i=1;i<=1000;i++){
    for(int j=i;j<=1000;j=j+i){
        v[j].first++;   
}
}
sort(v.begin(),v.end(),cmp);
cout<<"Case "<<cs<<": "<<v[n].second<<'\n';
}
return 0;
}