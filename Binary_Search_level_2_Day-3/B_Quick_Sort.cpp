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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (is_sorted(a.begin(), a.end()))
        {
            cout << 0 << line;
            continue;
        }

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == cnt + 1)
            {
                cnt++;
            }
        }

        int unordered = n - cnt;
        int ans = (unordered + k - 1) / k; // ceil(a/b)=(a+b-1)/b
        cout << ans << line;
    }

    return 0;
}