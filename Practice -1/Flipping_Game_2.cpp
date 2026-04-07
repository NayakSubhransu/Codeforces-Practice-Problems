#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> prefix(n + 1, 0);
    for (int i = 0; i < n; i++)
        prefix[i + 1] = prefix[i] + a[i];

    int total_ones = prefix[n];
    int best = 0;

    for (int i = 0; i < n; i++ )
    {
        for( int j= i ; j<n; j++ )
        {
            int ones_in = prefix[j + 1] - prefix[i];
            int zeros_in = (j - i + 1) - ones_in;

            int ones_out = total_ones - ones_in;

            int total_ones_after_flip = ones_out + zeros_in;

            best = max(best, total_ones_after_flip);

        }
    }

    cout << best << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1; // single test case
    while (t--)
    {
        solve();
    }

    return 0;
}