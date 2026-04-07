#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    int total_ones = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
            total_ones++;
    }

    if (total_ones == n)
    {
        cout << n - 1 << "\n";
        return;
    }

    int max_gain = 0, curr = 0;

    for (int i = 0; i < n; i++)     //Kadane's => MAx Subaary Sum 
    {
        int val = (a[i] == 0 ? 1 : -1);
        curr = max(val, curr + val);
        max_gain = max(max_gain, curr);
    }

    cout << total_ones + max_gain << "\n";
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