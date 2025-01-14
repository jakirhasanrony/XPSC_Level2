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
        int cnt = 0;
        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                cnt++;
                if ((n / i) != i)
                {
                    cnt++;
                }
            }
        }
        cout << cnt << line;
    }

    return 0;
}