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
    int n;
    cin >> n;

    vi pos(n + 1);

    repp(i, 1, n) 
    {
        int x;
        cin >> x;
        pos[x] = i;
    }

    int m; cin >> m;

    ll vasya = 0 , petya = 0;

    rep( i , m )
    {
        int b; cin  >> b;

        // Vasya: L to R → pos[b] comparisons
        vasya += pos[b];

        // Petya: R to L → (n - pos[b] + 1) comparisons
        petya += (n - pos[b] + 1);
    }

    cout << vasya << " " << petya << endl;
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