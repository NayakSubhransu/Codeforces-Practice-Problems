
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
    int n, k ;
    cin >> n >> k;

    string s; cin >> s;

    vector< ll > freq(26, 0);

    for( auto c : s)
    {
        freq[c - 'A']++;
    }

    sort(freq.rbegin(), freq.rend());

    ll ans = 0;

    for (int i = 0; i < 26 && k > 0 ; i++ )
    {
        ll take = min( (ll)k, freq[i] );
        ans += take * take;

        k -= take;
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t ;
    // cin >> t;

    // while (t--)
    // {
    //     solve();
    // }

    solve();

    return 0;
}