#include <bits/stdc++.h>
#define ll long long
#define line '\n';
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        if (n == 1)
        {
            cout << -1 << line;
            continue;
        }
        sort(b.begin(), b.end());

        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                continue;
            }

            if (i == n - 1 && (a[i] == b[i]))
            {
                swap(b[n - 1], b[n - 2]);
            }
            else if (a[i] == b[i])
            {
                swap(b[i], b[i + 1]);
            }
        }
        for (auto val : b)
        {
            cout << val << " ";
        }
        cout << line;
    }

    return 0;
}