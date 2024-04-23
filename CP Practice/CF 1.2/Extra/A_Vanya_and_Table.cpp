#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    int a[1005][1005];
    int n;
    cin >> n;

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int x1, y1, x2, y2;

        cin >> x1 >> y1 >> x2 >> y2;
        ans += (x2 - x1 + 1) * (y2 - y1 + 1);
    }

    // for (int i = 0; i <= 100; i++)
    //     for (int j = 0; j <= 100; j++)
    //         ans += a[i][j];
    
    cout << ans << '\n';
    return 0;
}