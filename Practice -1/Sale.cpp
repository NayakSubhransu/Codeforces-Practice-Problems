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
    int n , m ;
    cin >> n >> m;    // <100

    vector<int> a(n);
    rep(i, n) cin >> a[i];

    sort(a.begin(), a.end());

    int sum = 0;

    for (int i = 0; i < m; i++)
    {
        if (a[i] < 0)
            sum += -a[i];
        else
            break;
    }

    cout << sum << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;

    while (t--)
    {
        solve();
    }

    return 0;
}