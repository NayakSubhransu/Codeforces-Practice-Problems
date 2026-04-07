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

    int cnt25 = 0, cnt50 = 0;

    rep(i, n)
    {
        if (a[i] == 25)
        {
            cnt25++;
        }
        else if (a[i] == 50)
        {
            if (cnt25 > 0)
            {
                cnt25--;
                cnt50++;
            }
            else
            {
                NO;
                return;
            }
        }
        else // a[i] == 100
        {
            if (cnt50 > 0 && cnt25 > 0)
            {
                cnt50--;
                cnt25--;
            }
            else if (cnt25 >= 3)
            {
                cnt25 -= 3;
            }
            else
            {
                NO;
                return;
            }
        }
    }

    YES;
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