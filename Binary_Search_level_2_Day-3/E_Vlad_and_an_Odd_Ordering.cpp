#include <bits/stdc++.h>
#define ll long long
#define line '\n';
using namespace std;
void rony()
{
    ll n, k;
    cin >> n >> k;
    for (int i = 1; i <= (log2(n) + 1); i++)
    {
        ll x = pow(2, i);
        ll y = (n + (x / 2)) / x;
        if (k <= y)
        {
            if (k == 1)
            {
                cout << (x / 2) << "\n";
                return;
            }
            else
            {
                ll ans = (x / 2) + ((k - 1) * x);
                cout << ans << "\n";
                return;
            }
        }
        else
        {
            k -= y;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        rony();
    }
    return 0;
}