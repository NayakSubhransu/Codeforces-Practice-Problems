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

    int cnt5 = 0, cnt0 = 0;

    rep( i, n)
    {
        int x;
        cin >> x; 

        if(x == 5) cnt5++;
        else cnt0++;
    }
    if(cnt0 == 0)    // Cannt be Divisble by 10 
    {
        cout << -1 << endl;
        return;
    }

    int k = cnt5 / 9;
    if(k == 0)    // Less than 9 5's, so we can not make it Divisble by 9
    {
        cout << 0 << endl;
        return;
    }

    rep(i, k * 9) cout << 5;   // Sum( All 5's ) shoudl be divisible by 9, so we need to take k as a Multiple  of  9's at a time
    rep(i, cnt0) cout << 0;
    cout << endl;


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