#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define repp(i, a, b) for (int i = (a); i <= (b); ++i)
#define repr(i, a, b) for (int i = (a); i >= (b); --i)
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
#define vi vector<int>
#define vll vector<ll>
#define srt(a) sort(a.begin(), a.end())
#define all(x) (x).begin(), (x).end()

void solve()
{

    string s;
    cin >> s;

    int i = 0;
    int n = s.size();
    bool valid = true;

    while( i < n )
    {
        if( i+3 <= n && s.substr(i, 3) =="144" )
            i += 3;
            else if( i+2 <= n && s.substr(i, 2) == "14" )
                i += 2;
                else if( s[i] == '1' )
                    i++;
                    else
                    {
                        valid = false;
                        break;
                    }
    }

    if( valid ) YES;
    else NO;
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;

    // while (t--)
    // {
    //     solve();
    // }

    solve();

    return 0;
}