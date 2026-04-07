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
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    sort(a.begin(), a.end());

    int m;
    cin >> m;
    vector<int> b(m);
    rep(i, m) cin >> b[i];
    sort(b.begin(), b.end());

    int i = 0, j = 0;
    int cnt = 0;

    while (i < n && j < m)
    {
        if( abs(a[i] - b[j]) <= 1 )
        {
            cnt++;
            i++;
            j++;
        }
        else if( a[i] < b[j] )
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    cout << cnt << endl;
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