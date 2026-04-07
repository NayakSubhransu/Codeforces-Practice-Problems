#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int dots = 0;
        bool hasThree = false;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
            {
                dots++;

                if (i + 2 < n && s[i + 1] == '.' && s[i + 2] == '.')
                {
                    hasThree = true;
                    break;
                }
            }
        }

        cout << (hasThree ? 2 : dots) << '\n';
    }
}