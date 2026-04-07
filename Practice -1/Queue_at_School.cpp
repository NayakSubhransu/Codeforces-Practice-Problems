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
    int n, t;
    cin >> n >> t;

    string s;
    cin >> s;


    while( t-- )
    {
        int i = 0;

        while( i < n - 1 )
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                swap(s[i], s[i + 1]);
                i += 2;
            }
            else
                i++;
        }
    }

    cout << s << endl;
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