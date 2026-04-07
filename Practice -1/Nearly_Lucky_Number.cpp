#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define repp(i, a, b) for (int i = (a); i <= (b); ++i)
#define repr(i, a, b) for (int i = (a); i >= (b); --i)
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'


bool is_Lucky( int x )
{
    string s = to_string(x);

    for( auto c : s )
    {
        if( c != '4' && c != '7' )
            return false;
    }
    return true;
}

void solve()
{
    string n;
    cin >> n;

    int cnt_lucky = 0;

    for( auto c : n )
    {
        if( c == '4' || c == '7' )
            cnt_lucky++;
    }

    if (is_Lucky(cnt_lucky ) )
        YES;
        else
            NO; 
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