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
    if (n % 3 == 0)
        cout << "Second" << endl;
    else
        // n%3 == 1 → subtract 1 → divisible by 3 (win on move 1)
        // n%3 == 2 → add    1 → divisible by 3 (win on move 1)
        cout << "First" << endl;
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