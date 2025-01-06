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
        vector<ll> a(n);
        ll sum = 0, ones_cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            if (a[i] == 1)
            {
                ones_cnt++;
            }
        }

        if (n == 1)
        {
            cout << "NO" << line;
        }

        else
        {
            if (sum - n >= ones_cnt)
            {
                cout << "YES" << line;
            }
            else
            {
                cout << "NO" << line;
            }
        }
    }

    return 0;
}