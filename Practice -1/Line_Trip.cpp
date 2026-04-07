#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define repp(i, a, b) for (int i = (a); i <= (b); ++i)
#define repr(i, a, b) for (int i = (a); i >= (b); --i)
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'

void solve()
{

    int n, x;

    cin >> n >> x;

    vector< int > a(n);
    rep(i, n) cin >> a[i];

    int ans = 0;

    ans = max(ans, a[0]);
    repp(i, 1, n - 1)
        ans = max(ans, a[i] - a[i - 1]);

    ans = max( ans , 2*(x - a[n-1] ) );

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t ;
    cin >> t;

    while (t--)
    {
        solve();
    }

    // solve();

    return 0;
}
