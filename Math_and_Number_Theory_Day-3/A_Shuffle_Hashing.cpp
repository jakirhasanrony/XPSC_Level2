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
        string p;
        cin >> p;
        string h;
        cin >> h;

        int size_p = p.size();
        int size_h = h.size();
        if (size_p > size_h)
        {
            cout << "NO" << line;
            continue;
        }
        sort(p.begin(), p.end());
        int f = 0;

        for (int i = 0; i <= (size_h - size_p); i++)
        {
            string s = h.substr(i, size_p);
            sort(s.begin(), s.end());
            if (s == p)
            {
                f = 1;
                break;
            }
        }
        if (f == 1)
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