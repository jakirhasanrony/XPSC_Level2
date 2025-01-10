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

        set<int> st;
        for (int i = 0; i < n; i++)
        {
            st.insert(a[i]);
        }
        vector<int> v;
        for (auto &it : st)
        {
            v.push_back(it);
        }

        int ans = 0;
        for (int i = 0; i < v.size(); i++)
        {
            int x = v[i];
            auto itt = lower_bound(v.begin(), v.end(), x + n);
            int d = itt - v.begin() - i;
            ans = max(ans, d);
        }
        cout << ans << line;
    }

    return 0;
}