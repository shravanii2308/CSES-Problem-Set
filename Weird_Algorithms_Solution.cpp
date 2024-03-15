#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<long long> ans;
    long long n;
    cin >> n;
    ans.push_back(n);
    while (n > 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else if (n % 2 == 1)
        {
            n = (n * 3) + 1;
        }
        ans.push_back(n);
    }
    for (auto it : ans)
        cout << it << " ";
    cout << endl;
}
