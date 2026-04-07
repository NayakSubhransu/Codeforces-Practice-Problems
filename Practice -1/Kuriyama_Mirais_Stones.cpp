#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<long long> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    // Prefix sum of original
    vector<long long> pref(n + 1, 0);
    for (int i = 1; i <= n; i++)
        pref[i] = pref[i - 1] + v[i];

    // Sorted array
    vector<long long> u = v;
    sort(u.begin(), u.end());

    // Prefix sum of sorted
    vector<long long> pref_sorted(n + 1, 0);
    for (int i = 1; i <= n; i++)
        pref_sorted[i] = pref_sorted[i - 1] + u[i];

    int m;
    cin >> m;

    while (m--)
    {
        int type, l, r;
        cin >> type >> l >> r;

        if (type == 1)
        {
            cout << pref[r] - pref[l - 1] << '\n';
        }
        else
        {
            cout << pref_sorted[r] - pref_sorted[l - 1] << '\n';
        }
    }
}