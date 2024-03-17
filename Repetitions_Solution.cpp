#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int ans = -1, cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            cnt++;
        }
        else
        {
            ans = max(ans, cnt);
            cnt = 1;
        }
    }
    ans = max(cnt, ans);
    cout << ans << endl;
}
