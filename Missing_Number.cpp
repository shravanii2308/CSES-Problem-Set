#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    int ans = -1;
    for (int i = 0; i < n - 1; i++)
    {
        int a;
        cin >> a;
        nums.push_back(a);
    }
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != i + 1)
        {
            ans = i + 1;
            break;
        }
    }
    cout << ans << endl;
}