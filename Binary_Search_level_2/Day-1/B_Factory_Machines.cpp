#include <bits/stdc++.h>
#define ll long long
#define line '\n';
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll l = 1, r = 1e18, mid, ans = 0;

    auto ok = [&](ll seconds)
    {
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cnt += (seconds / a[i]);
            if (cnt >= t)
            {
                return true;
            }
        }
        return false;
    };
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << line;

    return 0;
}