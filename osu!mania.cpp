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
    vector<string> grid(n);
    for (int i = 0; i < n; ++i)
    {
      cin >> grid[i];
    }
    vector<int> nums;
    for (int i = n - 1; i >= 0; --i)
    {
      for (int j = 0; j < 4; ++j)
      {
        if (grid[i][j] == '#')
        {
          int ans = j + 1;
          nums.push_back(ans);
        }
      }
    }

    int m = nums.size();
    for (int i = 0; i < m; ++i)
    {
      cout << nums[i] << " ";
    }
    cout << endl;
  }
  return 0;
}