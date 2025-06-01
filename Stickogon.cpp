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
    for (int i = 0; i < n; i++)
    {
      cin >> nums[i];
    }

    map<int, int> m;
    for (int i = 0; i < n; ++i)
    {
      m[nums[i]]++;
    }

    int cnt = 0;
    for (auto &it : m)
    {
      if (it.second >= 3)
      {
        cnt += it.second / 3;
      }
    }
    cout << cnt << endl;
  }
  return 0;
}