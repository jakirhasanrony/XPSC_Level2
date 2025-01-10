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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (is_sorted(a.begin(), a.end()))
        {
            cout << "YES" << line;
            continue;
        }

        int l = 0;
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            int v = a[i] / 10;
            int r = a[i] % 10;

            if (v >= l && r >= l)
            {
                l = r;
                ans.push_back(v);
                ans.push_back(r);
            }
            else
            {
                ans.push_back(a[i]);
                l = a[i];
            }
        }

        if (is_sorted(ans.begin(), ans.end()))
        {
            cout << "YES" << line;
        }
        else
        {
            cout << "NO" << line;
        }
    }

    return 0;
}