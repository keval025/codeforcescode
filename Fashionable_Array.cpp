#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; ++i)
    {
      cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    int ans1 = INT_MAX;
    int ans2 = INT_MAX;

    if (nums[n - 1] % 2 != 0)
    {
      for (int i = 0; i < n; ++i)
      {
        if (nums[i] % 2 != 0)
        {
          ans1 = i;
          break;
        }
      }
    }
    else
    {
      for (int i = 0; i < n; ++i)
      {
        if (nums[i] % 2 == 0)
        {
          ans1 = i;
          break;
        }
      }
    }

    if (nums[0] % 2 == 0)
    {
      for (int i = n - 1; i >= 0; --i)
      {
        if (nums[i] % 2 == 0)
        {
          ans2 = n - i - 1;
          break;
        }
      }
    }
    else
    {
      for (int i = n - 1; i >= 0; --i)
      {
        if (nums[i] % 2 != 0)
        {
          ans2 = n - i - 1;
          break;
        }
      }
    }
    cout << min(ans1, ans2) << endl;
  }
}
