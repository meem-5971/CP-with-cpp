#include<bits/stdc++.h>
#define ll long long
using namespace std;
int digitsum(int n) {
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    cin>>n;
    map<int,int>mem;
    for (int i = 0; i < pow(10, n/2); ++i) {
        int s = digitsum(i);
        mem[s]++;
    }
    int ans = 0;
    for (int i = 0; i < pow(10, n/2); ++i) {
        int s = digitsum(i);
        ans += mem[s];
    }
    cout<<ans<<endl;
    return 0;
}