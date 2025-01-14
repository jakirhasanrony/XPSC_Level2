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
        int cnt_1 = 0, cnt_0 = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
            {
                cnt_0++;
            }
            if (a[i] == 1)
            {
                cnt_1++;
            }
        }

        ll res = pow(2, cnt_0) * cnt_1;

        cout << res << line;
    }

    return 0;
}