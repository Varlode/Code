#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    if (n & 1) cout << -1 << endl;
    else cout << 1 << " " << n / 2 << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--)
        solve();
}