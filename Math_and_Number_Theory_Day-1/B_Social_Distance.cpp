#include <bits/stdc++.h>
#define ll long long
#define line '\n';
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, sum = 0;
        cin >> n >> m;

        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        a.push_back(a[0]);

        for (ll i = 0; i < n; i++)
        {
            sum += max(a[i], a[i + 1]);
        }
        sum += n;

        if (m >= sum)
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