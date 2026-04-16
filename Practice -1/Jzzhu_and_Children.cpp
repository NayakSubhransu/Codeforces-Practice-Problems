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

    int n, m; cin >> n >> m ;
    queue<pair<int, int>> a; 

    repp( i , 1 , n )
    {
        int x;  cin >> x;
        a.push({x, i}); // Push All elements { Value, index  }
    }

    int final_idx = -1; 

    while( !a.empty() )
    {
        auto [need, curr_idx] = a.front();
        a.pop();

        need -= m;

        if( need <= 0 )  final_idx =  curr_idx ;    // fk home
        else   a.push({need, curr_idx});    //Get lost to the  last 

    }

    cout << final_idx << endl;
    
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