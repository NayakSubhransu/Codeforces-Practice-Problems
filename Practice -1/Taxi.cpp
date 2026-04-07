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

    int ones = 0, twos = 0, threes = 0, fours = 0;

    rep( i, n )
    {
        if (a[i] == 1 )
            ones++;
        else if (a[i] == 2 )
            twos++;
        else if (a[i] == 3)
            threes++;
            else
                fours++;
    }
    int taxis = 0;

    //Cases Possible --
    // 4 
    // 3 1 
    // 2 2 
    // 2 1 1
    // 1 1 1 1

    taxis += fours; // 4

    taxis += threes; // 3 1

    ones = max(0, ones - threes);

    taxis += twos/2 ;

    twos %= 2; // 2 2

    if (twos) // 2 1 1
    {
        taxis += 1;
        ones =max( 0, ones - 2 ) ;
    }

    // 1 1 1 1

    taxis +=  (ones + 3 )/ 4 ;

    cout << taxis << endl;
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