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

    vector<int> a(n);   rep(i,n) cin >> a[i] ;

    int untreated = 0, police = 0;

    rep( i, n )
    {
        if (a[i] >  0)
            police+= a[i];
        else
        {
            if( police > 0 )
                police--;
            else
                untreated++;
        }
    }

    cout << untreated << endl;
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